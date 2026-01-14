#include <iostream>
#include "arboles.hpp"
using namespace std;

struct Material { // Estructura que representa un material
    string nombre;
    float peso;
};

struct Totales {
    float suma {};
    int cantidad {};
};

ostream& operator << (ostream& os, const Material& mat) {
    os << mat.nombre << ": " << mat.peso;
    return os;
}

int criterio(Material m1, Material m2) { // Criterio ascendente por nombre
    return m1.nombre.compare(m2.nombre);
}

// Función para calcular los totales
template <typename T> void calcularTotales(NodoAr<T>* nodo, Totales& totales) {
    if (nodo) {
        totales.suma += nodo->dato.peso;
        totales.cantidad++;
        calcularTotales(nodo->izq, totales);
        calcularTotales(nodo->der, totales);
    }
}

int main() {
    
    NodoAr<Material>* arbol {};

    Material materiales[] = {
        {"Hierro", 6900.7},
        {"Arcilla", 384.35},
        {"Cobre", 4507.5},
        {"Aluminio", 2250.2},
        {"Plomo", 10527.15},
        {"Litio", 8412.28},
        {"Zinc", 142.4}
    };

    Totales totales;
    calcularTotales(arbol, totales);
    cout << "Suma: " << totales.suma << endl;
    cout << "Cantidad: " << totales.cantidad << endl;

    for (const Material& mat : materiales) {
        insertar(mat, arbol, criterio);
    }

    cout << endl << "====== INORDEN =======" << endl;
    inorden(arbol, ver<Material>);
    calcularTotales(arbol, totales);

    cout << endl << "======= TOTALES =======" << endl;
    cout << "Suma: " << totales.suma << endl;
    cout << "Cantidad: " << totales.cantidad << endl;
    cout << "Promedio: " << (totales.cantidad > 0 ? totales.suma / totales.cantidad : 0) << endl;

    return 0;
}
