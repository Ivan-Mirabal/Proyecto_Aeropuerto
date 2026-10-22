#iostream>
#include "control_vuelos.hpp"

int main() {
    std::cout << "=== 911sOS: Nucleo del Aeropuerto Manuel Carlos Piar ===" << std::endl;
    
    // Probando la creación de una aeronave con el PCB definido
    BloqueControlVuelo vuelo1;
    vuelo1.idVuelo = 101;
    vuelo1.tipo = TipoAeronave::Comercial;
    vuelo1.operacion = TipoOperacion::Aterrizaje;
    vuelo1.combustible = 4500.0;
    vuelo1.estado = EstadoVuelo::Listo;

    std::cout << "Vuelo de prueba creado con ID: " << vuelo1.idVuelo << std::endl;
    std::cout << "Sistema listo para implementar planificadores y hilos." << std::endl;

    return 0;
}