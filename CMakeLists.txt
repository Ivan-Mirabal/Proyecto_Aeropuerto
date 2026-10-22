# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.15)

# Nombre de tu proyecto
project(911sOS)

# Configurar el estándar del lenguaje a C++20 (exigido por su diseño)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Indicar dónde están los archivos de cabecera (.hpp / .h)
include_directories(include)

# Buscar automáticamente todos los archivos .cpp dentro de la carpeta src/
file(GLOB SOURCES "src/*.cpp")

# Crear el archivo ejecutable final con todos los fuentes encontrados
add_executable(911sOS ${SOURCES})