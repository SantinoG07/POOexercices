#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <char> palabra;
vector <char> final;

int main(){
    string palabra;
    int cantvo=0;
    bool flag=true;
    char caracterareemplazar, caracterdereemplazo;

    cout<<"Ingrese una frase o palabra"<<endl;
    getline(cin,palabra);
    cout<<"Ingrese caracter a reemplazar"<<endl;
    cin>>caracterareemplazar;
    cout<<"Ingrese el caracter de reemplazo"<<endl;
    cin>>caracterdereemplazo;


    for(char letra:palabra){
        if(letra==caracterareemplazar){
            final.push_back(caracterdereemplazo);
        }else{
            final.push_back(letra);
        }
    }

    for(int i=0; i<final.size();i++){
        cout<<final[i];
    }
    cout<<endl;
    

    system("pause");
    return 0;
}