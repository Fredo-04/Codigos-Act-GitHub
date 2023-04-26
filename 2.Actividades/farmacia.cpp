#include "farmacia_h.h"
int main() {
    Farmacia farmacia;

    farmacia.agregarMedicamento("Paracetamol", 50);
    farmacia.agregarMedicamento("Ibuprofeno", 100);

    farmacia.venderMedicamento("Paracetamol", 20);
    farmacia.comprarMedicamento("Ibuprofeno", 30);
    farmacia.venderMedicamento("Ibuprofeno", 50);

    return 0;
}
