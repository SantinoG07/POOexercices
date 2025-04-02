#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombre;
    string apellido;

    cout<<"Ingrese nombre del usuario"<<endl;
    cin>>nombre;
    cout<<"Ingrese apellido del usuario"<<endl;
    cin>>apellido;
    nombre=nombre +" "+ apellido;

    cout<<nombre<<endl;

    system("pause");
    return 0;
}