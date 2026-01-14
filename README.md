# Sistema de Inventario con Árboles Binarios (BST)

Implementación de un sistema de gestión de materiales utilizando un **Árbol Binario de Búsqueda (BST)** en C++. Este proyecto demuestra el manejo avanzado de memoria dinámica, punteros y programación genérica mediante Templates.

## Highlights Técnicos

* **Estructuras de Datos Dinámicas:** Implementación desde cero de un BST (`NodoAr`) sin utilizar contenedores estándar (como `std::map`), gestionando manualmente la asignación y liberación de memoria.
* **C++ Templates:** Uso de plantillas (`template <typename T>`) para crear una estructura de datos agnóstica al tipo de dato, permitiendo reutilizar el árbol para cualquier objeto.
* **Recursividad:** Algoritmos recursivos para operaciones de inserción, búsqueda y recorridos (Inorden, Preorden, Postorden).
* **Punteros a Función:** Inyección de lógica de comparación (`criterio`) para flexibilizar el ordenamiento del árbol según atributos arbitrarios (peso, nombre, etc.).

## 📋 Funcionalidades

El sistema permite cargar un set de datos de materiales (Hierro, Litio, Cobre, etc.) y realizar:
1.  **Cálculo de Totales:** Sumatoria de pesos y conteo de elementos mediante recorrido del árbol.
2.  **Ordenamiento:** Visualización de datos ordenados alfabéticamente (In-Order Traversal).
3.  **Estadísticas:** Cálculo de promedios en tiempo de ejecución.

## 🛠️ Compilación y Ejecución

El proyecto puede compilarse con cualquier compilador estándar de C++ (g++ / clang).

```bash
# Compilar
g++ main.cpp -o inventario

# Ejecutar
./inventario
