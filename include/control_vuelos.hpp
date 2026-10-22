#ifndef CONTROL_VUELOS_HPP
#define CONTROL_VUELOS_HPP

#include <string>

// Enums definidos en el informe de la Entrega 1
enum class EstadoVuelo   { Nuevo, Listo, EnEjecucion, Bloqueado, Terminado };
enum class TipoAeronave  { Comercial, Carga, Privado, Charter };
enum class TipoOperacion { Aterrizaje, Despegue };

// Estructura del PCB (Bloque de Control de Vuelo)
struct BloqueControlVuelo {
    int           idVuelo;
    TipoAeronave  tipo;
    TipoOperacion operacion;
    double        combustible;        // litros (L)
    double        capacidadTanque;    // litros (L)
    EstadoVuelo   estado;
    int           prioridadBase;      // 0 (más alta) a 5
    int           prioridadEfectiva;  // recalculada por envejecimiento
    long          tiempoLlegada;      
    long          tiempoEspera;
    long          rafagaEstimada;
    long          tiempoRestante;
    long          tiempoFinalizacion; // -1 mientras no termine
    int           pistaAsignada;      // -1 si no ocupa ninguna
};

#endif // CONTROL_VUELOS_HPP