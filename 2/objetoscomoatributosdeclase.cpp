#include <iostream>
using namespace std;
class Clase{
    int varentera;
    float varfloat;
    public:
        Clase(){varentera=0;varfloat=0;}
        int getvarentera(){return this->varentera;}
        float getvarfloat(){return this->varfloat;}
        Clase& sumaEntero(int n){
            varentera+=n;
            return *this;
        }
        Clase& sumaflotante(float n){
            varfloat+=n;
            return *this;
        }
};
int main(){
    Clase objeto;
    cout<<objeto.getvarentera()<<endl<<objeto.getvarfloat()<<endl;
    objeto.sumaEntero(5).sumaflotante(3.5);
    cout<<objeto.getvarentera()<<endl<<objeto.getvarfloat()<<endl;
return 0;
}
