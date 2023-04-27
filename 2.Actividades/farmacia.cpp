#include "farmacia_h.h"
#include "menufarmacia_h.h"
int main() {
    Farmacia farmacia;
    farmacia.agregarMedicamento("Paracetamol", 50);
    farmacia.agregarMedicamento("Ibuprofeno", 30);
    farmacia.agregarMedicamento("Aspirina", 20);
    Menu menu;
    menu.mostrar();
    return 0;
}