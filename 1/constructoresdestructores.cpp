#include <iostream>
using namespace std;
class NewClass{
    int x;
    public:
        NewClass(int _x):x(_x){}
        ~NewClass();
};
NewClass::~NewClass(){cout<<"Ejecutando el destructor ... obj"<<x<<endl;}
NewClass obj1(1);
int main(){
    NewClass obj2(2);
    {
        NewClass obj3(3);
    }
    NewClass obj3(4);
    return 0;
}
