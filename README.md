# Proyecto_modelo_academico: Jerarquía y Composición con Polimorfismo


Este proyecto fue desarrollado como parte del curso de **Estructuras Abstractas de Datos y Algoritmos para Ingeniería** durante mi formación universitaria. El objetivo principal es modelar un sistema académico con personas, estudiantes, asistentes y equipos de laboratorio, utilizando principios de la programación orientada a objetos como **herencia**, **composición** y **polimorfismo** en C++.

## 🧾 Descripción

El programa simula una pequeña base de datos académica donde se almacenan diferentes tipos de personas (estudiantes y asistentes), sus materias inscritas y, en el caso de los asistentes, también equipos de laboratorio asociados. Se hace uso de:

- **Herencia**: para extender comportamientos desde la clase base `Persona`.
- **Composición**: para modelar la relación entre estudiantes y sus materias.
- **Polimorfismo**: para manipular listas heterogéneas de objetos derivados desde la clase base.

## 🛠️ Estructura del Proyecto

El proyecto contiene múltiples archivos fuente en C++:

- `Persona.h` / `Persona.cpp`: Clase base abstracta.
- `Estudiante.h` / `Estudiante.cpp`: Hereda de `Persona` y contiene una lista de materias.
- `Asistente.h` / `Asistente.cpp`: Hereda de `Estudiante` e incluye equipos de laboratorio.
- `Materias.h` / `Materias.cpp`: Clase que representa una materia académica.
- `Equipo laboratorio.h` / `Equipo laboratorio.cpp`: Modela equipos asociados a un asistente.
- `main.cpp`: Archivo principal que contiene la carga y visualización de datos.

## ▶️ Cómo ejecutar el programa

1. Asegúrate de tener un compilador de C++ instalado (como `g++`).
2. Abre una terminal en la carpeta del proyecto.
3. Compila los archivos:

```bash
g++ -std=c++11 -o programa main.cpp Persona.cpp Estudiante.cpp Asistente.cpp Materias.cpp "Equipo laboratorio.cpp"


4. Ejecuta el programa:

```bash
./programa
```

**Nota**: En sistemas Windows el ejecutable será `programa.exe`.

## 📚 Requisitos

* C++11 o superior
* Compilador compatible (g++, clang, MinGW, etc.)

## 👨‍💻 Autora

**Alison Rivera Cisneros**
Correo: [alison.rivera@ucr.ac.cr.com](mailto:alison.rivera@ucr.ac.cr.com)
Proyecto universitario - Estructuras Abstractas de Datos y Algoritmos para Ingeniería

