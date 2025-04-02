#include <iostream>
#include <string.h>

using namespace std;


int main(){
    string pal, busq;

    cout<<"Ingrese una oracion"<<endl;
    getline(cin,pal);
    cout<<"Ingrese la palabra a buscar dentro de la oracion"<<endl;
    cin>>busq;
    
    size_t pos = pal.find(busq);

    if(pos != string::npos){
        cout<<"La palabra se encuentra en la posicion: "<<pos+1<<endl;
    }else{
        cout<<"Palabra no encontrada"<<endl;
    }  

    system("pause");
    return 0;
}