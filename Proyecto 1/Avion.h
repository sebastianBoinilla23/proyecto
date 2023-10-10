//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_AVION_H
#define PROYECTO_1_AVION_H

#include "Aeronave.h"

class avion : public aeronave {         ///clase aeronave
public:
    std::string AltitudMaxima;
    std::string CantidadMotores;
    std::string Cate;

    avion() {
        this->AltitudMaxima = "";
        this->CantidadMotores = "";
        this->Cate = "";
    }

    void agregarAvion(int id, std::string RegistroMarca, std::string ModeloA,
                      int CapPasajeros, std::string VelocidadMax, std::string Autonomia,
                      std::string AnioFabricacion, std::string AltitudMaxima, std::string CantidadMotores, std::string Cate) {
        this->agregaraero(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax, Autonomia, AnioFabricacion);
        this->AltitudMaxima = AltitudMaxima;
        this->CantidadMotores = CantidadMotores;                           ///metodo agregar avion
        this->Cate = Cate;
    }

    void mostrarAvion() {               ///metodo mostrar avion
        this->mostraraero();
        std::cout << "Altitud Máxima: " << this->AltitudMaxima << "\n";
        std::cout << "Cantidad de Motores: " << this->CantidadMotores << "\n";
        std::cout << "Categoría: " << this->Cate << "\n";
    }
};

#endif //PROYECTO_1_AVION_H
