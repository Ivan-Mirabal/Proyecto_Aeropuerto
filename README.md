### Sistema Automatizado para el Control de las Operaciones del Aeropuerto Manuel Carlos Piar

Simulador multihilo orientado a eventos en tiempo real desarrollado en **C++20**, que modela el núcleo de un sistema operativo aplicado a la gestión inteligente de un aeropuerto. Proyecto académico de la materia **Sistemas Operativos**, Facultad de Ingeniería, Escuela de Ingeniería Informática de la **Universidad Católica Andrés Bello (UCAB)**.

## Equipo de Desarrollo

* **Ricardo Coraspe** (C.I. 32.420.339)
* **Ivan Mirabal** (C.I. 32.694.662)
* **Marlon Sanquiz** (C.I. 31.882.526)
* **Andres Ronderos** (C.I. 32.060.006)

---

## Descripción General del Proyecto

El proyecto simula los componentes clave de un sistema operativo utilizando como entorno el **Aeropuerto Internacional Manuel Carlos Piar (PZO / SVPR)** en Puerto Ordaz:
1. **Gestión de Vuelos (Torre de Control):** Hilos independientes por aeronave, Bloques de Control de Vuelo (PCB/TCB) y planificadores de CPU (*FCFS, SJF/SRTF, Prioridad con Desalojo y Round Robin*).
2. **Concurrencia y Sincronización:** Exclusión mutua en pistas mediante `std::mutex` y semáforos, resolución del problema Productor-Consumidor (radares y torre) con buffer circular, y prevención de *deadlocks*.
3. **Memoria Virtual (Radar de Trafico):** Paginación de trazas, traducción de direcciones y algoritmos de reemplazo de páginas (*FIFO, LRU, Reloj*) con simulación de Swap en disco.
4. **Entrada/Salida (Cintas de Equipaje):** Planificación de disco para el transporte de maletas (*FCFS, SSTF, SCAN/C-LOOK*).
5. **Sistema de Archivos y Seguridad:** Bitácora persistente de operaciones y matriz de control de acceso basada en roles (*Administrador/Director de Operaciones, Controlador Aéreo y Técnico de Mantenimiento*).

---

## Estructura del Repositorio

```text
/
├── docs/                      # Informes técnicos y documentación de cada entrega
│   └── entrega-1/             # Definición del Modelo de Abstracción y PCB
├── include/                   # Archivos de cabecera (.hpp)
├── src/                       # Archivos fuente de implementación (.cpp)
├── .gitignore                 # Archivos ignorados por Git (binarios, compilación)
├── CMakeLists.txt             # Configuración de compilación
└── README.md                  # Documentación principal del proyecto