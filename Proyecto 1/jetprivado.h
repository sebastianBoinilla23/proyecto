//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_JETPRIVADO_H
#define PROYECTO_1_JETPRIVADO_H
#include <string>
#include <vector>
#include <iostream>
#include "servicio.h"
#include "frecuente.h"
#include "Aeronave.h"

class jetprivado : public aeronave {
public:
    std::string Propietario;
    std::vector<servicio> servicios;
    std::vector<frecuente> frecuentes;

    jetprivado() {
        this->Propietario = "";
    }

    void agregarjetprivado(int id, std::string RegistroMarca, std::string ModeloA,
                           int CapPasajeros, std::string VelocidadMax, std::string Autonomia,
                           std::string AnioFabricacion, std::string Propi) {
        this->agregaraero(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax, Autonomia, AnioFabricacion);
        this->Propietario = Propi;
    }

    void agregarServicio(const std::string& nombre) {
        servicios.push_back(servicio(nombre));
    }

    void agregarViajeFrecuente(const std::string& destino) {
        frecuentes.push_back(frecuente(destino));
    }

    void mostrarjet() {
        this->mostraraero();
        std::cout << "NOMBRE DEL PROPIETARIO: " << this->Propietario << "\n";
        for (int i = 0; i < servicios.size(); ++i) {
            std::cout << "--- SERVICIOS A BORDO ---";
            std::cout << "SERVICIOS: " << this->servicios[i].nombre << "\n";
        }
        for (int i = 0; i < frecuentes.size(); ++i) {
            std::cout << "--- DESTINOS FRECUENTES ---";
            std::cout << "DESTINOS: " << this->frecuentes[i].destino << "\n";
        }
    }
};
#endif //PROYECTO_1_JETPRIVADO_H
