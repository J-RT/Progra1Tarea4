#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main() {

    int i=0,numeroFactura,localidad,entradas,subtotal,cargosAdicionales,totalPagar,opcion2,corregir;
    string nombre;
    char opcion;
    int precioEntrada[] = {10500,20500,25500},cantidadEntradas[] = {0,0,0},acumuladoDinero[] = {0,0,0},numerosCedula[20];
    string nombreComprador[20];
    string localidades[] = {"Sol Norte/Sur","Sombra Este/Oeste","Preferencial"};

    cout << "Sistema de Control de Ventas\n";
    cout << "-----------------------------------\n";
    do {
    cout << "Digite el numero de factura\n";
    cin >> numeroFactura;
    cout << "-----------------------------------\n";
    cout << "Digite el numero de cedula\n";
    cin >> numerosCedula[i];
    cout << "-----------------------------------\n";
    cout << "Digite el nombre del comprador\n";
    cin >> nombreComprador[i];
    cout << "-----------------------------------\n";
    cout << "Digite la localidad\n0- Sol Norte/Sur\n1- Sombra Este/Oeste\n2- Preferencial\n";
    cin >> localidad;
    cout << "-----------------------------------\n";
    do {
            if (entradas > 4 ){
                cout << "No puede comprar mas de 4 entradas\n";
            }
    cout << "Digite la cantidad de entradas\n";
    cin >> entradas;
    } while (entradas > 4);

    printf("**************Recopilacion de datos************\n");

    subtotal = entradas* precioEntrada[localidad];
    cargosAdicionales = entradas * 1000;
    totalPagar = subtotal + cargosAdicionales;

    cout << "Numero de factura: " << numeroFactura << "\n";
    cout << "-----------------------------------\n";
    cout << "Cedula: " << numerosCedula[i] << "\n";
    cout << "-----------------------------------\n";
    cout << "Nombre del comprador: " << nombreComprador[i] << "\n";
    cout << "-----------------------------------\n";
    cout << "Localidad: " << localidades[localidad] << "\n";
    cout << "-----------------------------------\n";
    cout << "Cantidad de entradas: " << entradas << "\n";
    cout << "-----------------------------------\n";
    cout << "Subtotal: " << subtotal << "\n";
    cout << "-----------------------------------\n";
    cout << "Cargos por servicios: " << cargosAdicionales << "\n";
    cout << "-----------------------------------\n";
    cout << "Total a pagar: " << totalPagar << "\n";
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    do {
    cout << "Si desea corregir datos 1\ncontinuar proceso 0\n";
    cin >> opcion2;
    if (opcion2 == 0){
        break;
    }
    cout << "----------------------------------------------------\n";
    cout << "1- corregir nombre\n2- corregir localidad\n";
    cin >> corregir;
    cout << "#################################\n";
    switch (corregir) {
    case 1: {
        string nuevoNombre;
        int tamano = sizeof(nombreComprador)/sizeof(nombreComprador[0]);
        bool encontrado = false;
        cout << "Digite un nombre buscar:  ";
        cin >> nombre;
        cout << "\n";
        for (int i =0 ;(i<tamano);i++) {
	    if (nombre == nombreComprador[i]){
	    cout << "encontrado\digite el nuevo nombre: ";
	    cin >> nuevoNombre;
	    nombreComprador[i] = nuevoNombre;
	    encontrado = true;
	    }
        }

       if (encontrado==false){
	    cout << "El usuario no existe";
       }
    }
        break;
    case 2: {
        int nuevaLocalidad;
        cout << "Digite la localidad\n0- Sol Norte/Sur\n1- Sombra Este/Oeste\n2- Preferencial\n";
        cin >> nuevaLocalidad;
        localidades[localidad] = localidades[nuevaLocalidad];
        precioEntrada[localidad] = precioEntrada[nuevaLocalidad];
        break;
    }
        }
    printf("**************Recopilacion de datos************\n");

    subtotal = entradas* precioEntrada[localidad];
    cargosAdicionales = entradas * 1000;
    totalPagar = subtotal + cargosAdicionales;

    cout << "Numero de factura: " << numeroFactura << "\n";
    cout << "-----------------------------------\n";
    cout << "Cedula: " << numerosCedula[i] << "\n";
    cout << "-----------------------------------\n";
    cout << "Nombre del comprador: " << nombreComprador[i] << "\n";
    cout << "-----------------------------------\n";
    cout << "Localidad: " << localidades[localidad] << "\n";
    cout << "-----------------------------------\n";
    cout << "Cantidad de entradas: " << entradas << "\n";
    cout << "-----------------------------------\n";
    cout << "Subtotal: " << subtotal << "\n";
    cout << "-----------------------------------\n";
    cout << "Cargos por servicios: " << cargosAdicionales << "\n";
    cout << "-----------------------------------\n";
    cout << "Total a pagar: " << totalPagar << "\n";
    } while (opcion2 != 0);

    if (localidad == 0){
        cantidadEntradas[0] += entradas;
        acumuladoDinero[0] += subtotal;
    } else if (localidad == 1){
        cantidadEntradas[1] += entradas;
        acumuladoDinero[1] += subtotal;
    } else {
        cantidadEntradas[2] += entradas;
        acumuladoDinero[2] += subtotal;
    }
    cout << "-----------------------------------\n";
    cout << "Si desea registrar mas datos digite 1\n";
    cout << "Para salir digite 0\n";
    cin >> opcion;

    } while (opcion == 0);
    cout << "-----------------------------------\n";
    cout << "****************Estadisticas finales*********************\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Cantidad Entradas Localidad Sol Norte/Sur: " << cantidadEntradas[0] << "\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Acumulado Dinero Localidad Sol Norte/Sur: " << acumuladoDinero[0] << "\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Cantidad Entradas Localidad Sombra Este/Oeste: " << cantidadEntradas[1] << "\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Acumulado Dinero Localidad Sombra Este/Oeste: " << acumuladoDinero[1] << "\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Cantidad Entradas Localidad Preferencial: " << cantidadEntradas[2] << "\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Acumulado Dinero Localidad Preferencial: " << acumuladoDinero[2] << "\n";

  return 0;
}
