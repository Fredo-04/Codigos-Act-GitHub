#include "farmacia_h.h"
#ifndef menufarmacia_h
#define menufarmacia_h
class Menu {
private:
    Farmacia farmacia;
public:
    Menu() {}
    void mostrar() {
        int opcion;
        string nom;
        int stock;
        do {
            cout << "===== MENU =====" << endl;
            cout << "1. Agregar medicamento" << endl;
            cout << "2. Vender medicamento" << endl;
            cout << "3. Comprar medicamento" << endl;
            cout << "4. Salir" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcion;
            cout << "-----------------------" << endl;
            switch (opcion) {
                case 1:
                    cout << "Ingrese nombre del medicamento a agregar: ";
                    cin >> nom;
                    cout << "Ingrese stock disponible: ";
                    cin >> stock;
                    farmacia.agregarMedicamento(nom, stock);
                    break;
                case 2:
                    cout << "Ingrese nombre del medicamento a vender: ";
                    cin >> nom;
                    cout << "Ingrese unidades que se solicita: ";
                    cin >> stock;
                    farmacia.venderMedicamento(nom, stock);
                    break;
                case 3:
                    cout << "Ingrese nombre del medicamento a comprar: ";
                    cin >> nom;
                    cout << "Ingrese cantidad de unidades a comprar: ";
                    cin >> stock;
                    farmacia.comprarMedicamento(nom, stock);
                    break;
                case 4:
                    cout << "Saliendo del programa..." << endl;
                    break;
                default:
                    cout << "Opción inválida. Por favor, intente nuevamente." << endl;
                    break;
            }
            cout << "-----------------------" << endl;
        } while (opcion != 4);
    }
};
#endif