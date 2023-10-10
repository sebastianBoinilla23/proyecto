#include <iostream>
#include <vector>
#include <string>
#include "servicio.h"
#include "frecuente.h"
#include "jetprivado.h"
#include "Avion.h"
#include "Helicoptero.h"
#include "Vuelo.h"
#include "Pasajero.h"
#include "Tripulacion.h"

using namespace std;

int id = 0,idVuelo = 0; // Id vuelo

void crearvuelo(vector<vuelo>& vuelos, vector<avion>& aviones, vector<helicoptero>& helicopteros, vector<jetprivado>& jetsPrivados) {
    int opcion;
    do {
        system("cls");
        cout << "SELECCIONE UNA OPCION\n";
        cout << "1. Agregar vuelo\n";
        cout << "2. Mostrar vuelos\n";
        cout << "3. Salir\n";
        cin >> opcion;
        cout << ":::::::::::::::::::::\n";
        if (opcion == 1) {
            system("cls");
            string Origenvuelo;
            string Destinovuelo;
            vuelo n = vuelo();
            int IDaerLocal;
            cout << "INGRESE EL ORIGEN DE VUELO: ";
            cin >> Origenvuelo;
            cout << "INGRESE EL DESTINO DE VUELO: ";
            cin >> Destinovuelo;
            cout << "INGRESE EL ID DE AERONAVE: ";
            cin >> IDaerLocal;
            bool flag = 0;
            n.Crearvuelo(idVuelo,Origenvuelo,Destinovuelo);
            for (int i = 0; i < aviones.size(); ++i) {
                if (IDaerLocal == aviones[i].IDaeronave && aviones[i].Estado.compare("Disponible") == 0) {
                    IDaerLocal = aviones[i].IDaeronave;
                    aviones[i].asignarVuelo(n);
                    flag = 1;
                }
                else if(IDaerLocal == aviones[i].IDaeronave)
                    cout << "Totalmente asignado\n";
            }
            for (int i = 0; i < helicopteros.size(); ++i) {
                if (IDaerLocal == helicopteros[i].IDaeronave && helicopteros[i].Estado.compare("Disponible") == 0) {
                    IDaerLocal = helicopteros[i].IDaeronave;
                    helicopteros[i].asignarVuelo(n);
                    flag = 1;
                }
                else if(IDaerLocal == helicopteros[i].IDaeronave)
                    cout << "Totalmente asignado\n";
            }
            for (int i = 0; i < jetsPrivados.size(); ++i) {
                if (IDaerLocal == jetsPrivados[i].IDaeronave && jetsPrivados[i].Estado.compare("Disponible") == 0) {
                    IDaerLocal = jetsPrivados[i].IDaeronave;
                    jetsPrivados[i].asignarVuelo(n);
                    flag = 1;
                }
                else if(IDaerLocal == jetsPrivados[i].IDaeronave)
                    cout << "Totalmente asignado\n";
            }
            if(flag) {
                n.setAeronave(IDaerLocal);
                cout << "VUELO CREADO EXITOSAMENTE\n";
                vuelos.push_back(n);
                idVuelo++;
            }
            else
                cout << "VUELO NO AGREGADO: ID DEL AVION NO EXISTENTE O TOTALMENTE ASIGNADO";
            system("pause");
        } else if (opcion == 2) {
            system("cls");
            cout << "---VUELOS INGRESADOS---\n";
            for (int i = 0; i < vuelos.size(); i++) {
                cout << "------------------------------\n";
                vuelos[i].mostrarvuelo();
                cout << "------------------------------\n";
            }
            system("pause");
        }
    } while (opcion != 3);
}

void crearaeronave(vector<avion>& aviones, vector<helicoptero>& helicopteros, vector<jetprivado>& jetsPrivados) {
    int opcion;
    do {
        system("cls");
        cout << "SELECCIONE UNA OPCION\n";
        cout << "1. Agregar aeronave\n";
        cout << "2. Mostrar aeronave\n";
        cout << "3. Salir\n";
        cin >> opcion;
        cout << ":::::::::::::::::::::\n";
        if (opcion == 1) {
            system("cls");
            cout << "--- INGRESE EL TIPO DE AERONAVE QUE DESEA AGREGAR ---\n";
            cout << "1. Avion\n";
            cout << "2. Helicoptero\n";
            cout << "3. Jet Privado\n";
            int tipoAeronave;
            cin >> tipoAeronave;
            if (tipoAeronave == 1) {
                string RegistroMarca;
                string ModeloA;
                int CapPasajeros;
                string VelocidadMax;
                string Autonomia;
                string AnioFabricacion;
                string AltitudMaxima;
                string CantidadMotores;
                string Cate;
                avion n = avion();
                cout << "INGRESE LA MARCA REGISTRADA: ";
                cin >> RegistroMarca;
                cout << "INGRESE EL MODELO: ";
                cin >> ModeloA;
                cout << "INGRESE LA CAPACIDAD DE PASAJEROS: ";
                cin >> CapPasajeros;
                cout << "INGRESE LA VELOCIDAD MAXIMA: ";
                cin >> VelocidadMax;
                cout << "INGRESE LA AUTONOMIA DE LA AERONAVE: ";
                cin >> Autonomia;
                cout << "INGRESE EL ANIO DE FABRICACION: ";
                cin >> AnioFabricacion;
                cout << "INGRESE LA ALTITUD MAXIMA: ";
                cin >> AltitudMaxima;
                cout << "INGRESE LA CANTIDAD DE MOTORES: ";
                cin >> CantidadMotores;
                cout << "INGRESE LA CATEGORIA: ";
                cin >> Cate;
                n.agregarAvion(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax, Autonomia, AnioFabricacion, AltitudMaxima, CantidadMotores, Cate);
                aviones.push_back(n);
                id++;
                system("pause");
            } else if (tipoAeronave == 2) {
                system("cls");
                string RegistroMarca;
                string ModeloA;
                int CapPasajeros;
                string VelocidadMax;
                string Autonomia;
                string AnioFabricacion;
                string CantidadRotores;
                string CapacidadElevacion;
                string TipoUso;
                helicoptero n = helicoptero();
                cout << "INGRESE LA MARCA REGISTRADA: ";
                cin >> RegistroMarca;
                cout << "INGRESE EL MODELO: ";
                cin >> ModeloA;
                cout << "INGRESE LA CAPACIDAD DE PASAJEROS: ";
                cin >> CapPasajeros;
                cout << "INGRESE LA VELOCIDAD MAXIMA: ";
                cin >> VelocidadMax;
                cout << "INGRESE LA AUTONOMIA DE LA AERONAVE: ";
                cin >> Autonomia;
                cout << "INGRESE EL ANIO DE FABRICACION: ";
                cin >> AnioFabricacion;
                cout << "INGRESE LA CANTIDAD DE ROTORES: ";
                cin >> CantidadRotores;
                cout << "INGRESE LA CAPACIDAD DE ELEVACION: ";
                cin >> CapacidadElevacion;
                cout << "INGRESE EL TIPO DE USO: ";
                cin >> TipoUso;
                n.agregarhelicoptero(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax,
                                     Autonomia, AnioFabricacion, CantidadRotores, CapacidadElevacion, TipoUso);
                helicopteros.push_back(n);
                id++;
                system("pause");
            } else if (tipoAeronave == 3) {
                system("cls");
                string RegistroMarca;
                string ModeloA;
                int CapPasajeros;
                string VelocidadMax;
                string Autonomia;
                string AnioFabricacion;
                string Propietario;
                jetprivado n = jetprivado();
                cout << "INGRESE LA MARCA REGISTRADA: ";
                cin >> RegistroMarca;
                cout << "INGRESE EL MODELO: ";
                cin >> ModeloA;
                cout << "INGRESE LA CAPACIDAD DE PASAJEROS: ";
                cin >> CapPasajeros;
                cout << "INGRESE LA VELOCIDAD MAXIMA: ";
                cin >> VelocidadMax;
                cout << "INGRESE LA AUTONOMIA DE LA AERONAVE: ";
                cin >> Autonomia;
                cout << "INGRESE EL ANIO DE FABRICACION: ";
                cin >> AnioFabricacion;
                cout << "INGRESE EL NOMBRE DEL PROPIETARIO: ";
                cin >> Propietario;
                n.agregarjetprivado(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax, Autonomia,
                                    AnioFabricacion, Propietario);
                jetsPrivados.push_back(n);
                string destino, servicio;
                cout << "INGRESE UN DESTINO FRECUENTE: ";
                cin >> destino;
                cout << "INGRESE EL SERVICIO: ";
                cin >> servicio;
                n.agregarServicio(servicio);
                n.agregarViajeFrecuente(destino);
                id++;
                system("pause");
            } else {
                cout << "OPCION INVALIDA";
                break;
            }
        }else if (opcion == 2) {
            system("cls");
            cout << "---AVIONES INGRESADOS---\n";
            for (int i = 0; i < aviones.size(); i++) {
                cout << "------------------------------\n";
                aviones[i].mostrarAvion();
                cout << "------------------------------\n";
            }
            cout << "---HELICOPTEROS INGRESADOS---\n";
            for (int i = 0; i < helicopteros.size(); i++) {
                cout << "------------------------------\n";
                helicopteros[i].mostrarhelicoptero();
                cout << "------------------------------\n";
            }
            cout << "--- JETS INGRESADOS ---\n";
            for (int i = 0; i < jetsPrivados.size(); ++i) {
                cout << "------------------------------\n";
                jetsPrivados[i].mostrarjet();
                cout << "------------------------------\n";


            }
            system("pause");
        }
    } while (opcion != 3);
    return;
}

void crearusuario(vector<Pasajero>& pasajeros,vector<vuelo>& vuelos, vector<avion>& aviones, vector<helicoptero>& helicopteros, vector<jetprivado>& jetsPrivados){
    int opcion;
    do {
        cout << "---MENU USUARIOS--- \n";
        cout << "1. Comprar tiquete \n";
        cout << "2. Mostrar Usuarios Ingresados\n";
        cout << "3. Salir\n";
        cin >> opcion;
        if (opcion == 1) {
            system("cls");
            string Nombre;
            string Apellido;
            string Nacionalidad;
            string CantidadM;
            string EstSalud;
            string Cedula;
            string Genero;
            string Direccion;
            string NumeroTel;
            string Correo;
            Pasajero n = Pasajero();
            cout << "INGRESE SU NOMBRE: ";
            cin >> Nombre;
            cout << "INGRESE SU APELLIDO: ";
            cin >> Apellido;
            cout << "INGRESE SU NACIONALIDAD: ";
            cin >> Nacionalidad;
            cout << "CANTIDAD DE MALETAS: ";
            cin >> CantidadM;
            cout << "ESTADO DE SALUD: ";
            cin >> EstSalud;
            cout << "NUMERO DE CEDULA: ";
            cin >> Cedula;
            cout << "GENERO: ";
            cin >> Genero;
            cout << "DIRECCION: ";
            cin >> Direccion;
            cout << "NUMERO TELEFONICO: ";
            cin >> NumeroTel;
            cout << "CORREO: ";
            cin >> Correo;
            n.AgregarPasajero(Nombre, Apellido, Nacionalidad, CantidadM, EstSalud, Cedula, Genero, Direccion, NumeroTel, Correo);
            cout << "INGRESE EL ID DEL VUELO: ";
            int idVueloLocal;
            cin >> idVueloLocal;
            bool flag = 0;
            bool flag2 = 0;
            for (int i = 0; i < vuelos.size(); ++i){
                if (vuelos[i].ID == idVueloLocal){
                    for (int j = 0; j < aviones.size(); ++j) {
                        if (vuelos[i].aeronaveAsignada == aviones[j].IDaeronave && aviones[j].CapPasajeros > 0) {
                            aviones[j].CapPasajeros--;
                            flag = 1;
                            flag2 = 1;
                        }
                        else if(vuelos[i].aeronaveAsignada == aviones[j].IDaeronave)
                            cout << "Totalmente vendido\n";
                    }
                    for (int j = 0; j < helicopteros.size(); ++j) {
                        if (vuelos[i].aeronaveAsignada == helicopteros[j].IDaeronave && helicopteros[j].CapPasajeros > 0) {
                            helicopteros[j].CapPasajeros --;
                            flag = 1;
                            flag2 = 1;
                        }
                        else if(vuelos[i].aeronaveAsignada == helicopteros[j].IDaeronave)
                            cout << "Totalmente vendido\n";
                    }
                    for (int j = 0; j < jetsPrivados.size(); ++j) {
                        if (vuelos[i].aeronaveAsignada == jetsPrivados[j].IDaeronave&& jetsPrivados[j].CapPasajeros > 0){
                            jetsPrivados[j].CapPasajeros --;
                            flag = 1;
                            flag2 = 1;
                        }
                        else if(vuelos[i].aeronaveAsignada == jetsPrivados[j].IDaeronave)
                            cout << "Totalmente vendido\n";
                    }
                    if(flag2){
                        n.comprarVuelo(vuelos[i]);
                        flag2 = 0;
                    }
                }
            }
            if (flag){
                cout << "Tiquete comprado exitosamente\n";
                pasajeros.push_back(n);
            } else {
                cout << "ERROR: No existe el vuelo o asientos insuficientes\n";
            }
            system("pause");
        } else if (opcion == 2) {
            system("cls");
            cout << "---PASAJEROS REGISTRADOS---\n";
            for (int i = 0; i < pasajeros.size(); i++) {
                cout << "------------------------------\n";
                pasajeros[i].MostrarPasajero();
                cout << "------------------------------\n";
            }
        }
    }while (opcion != 3);
    return;
}



int main() {
    int menu;
    vector<aeronave> aeronaves;
    vector<avion> aviones;
    vector<helicoptero> helicopteros;
    vector<jetprivado> jetsPrivados;
    vector<vuelo> vuelos;
    vector<Pasajero> pasajeros;
    do {
        system("cls");
        cout << "---------BIENVENIDO--------\n";
        cout << "------MENU AEROPUERTO--------\n";
        cout << "1. Aeronaves\n";
        cout << "2. Vuelos\n";
        cout << "3. Usuarios\n";
        cin >> menu;
        cout << ":::::::::::::::::::::\n";

        if (menu == 1) {
            system("cls");
            crearaeronave(aviones, helicopteros, jetsPrivados);
        } else if (menu == 2) {
            crearvuelo(vuelos, aviones, helicopteros, jetsPrivados);
        } else if (menu == 3) {
            crearusuario(pasajeros, vuelos, aviones, helicopteros, jetsPrivados);
        }


        system("pause");
    } while (menu != 4);

    return 0;
}