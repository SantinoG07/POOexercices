#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <char> inversa;
vector <char> aux;

int main(){
    string palabra;
    int cantvo=0;
    bool flag=true;

    cout<<"Ingrese una frase o palabra para saber si es polindroma"<<endl;
    getline(cin,palabra);

    for(char letra:palabra){
        if(letra!=' '){
        aux.push_back(letra);
        }else{
            continue;
        }
    }

    int j=0;
    j=aux.size()-1;
    for(int i=0; i<aux.size();i++){
        inversa.push_back(aux[j]);
        j--;
    }
    for(int i=0;i<inversa.size();i++){
    if(inversa[i]!=aux[i]){
        flag=false;
        break;
    }else{
        continue;
    }

    }

    if(flag==true){
        cout<<"La palabra es palindroma!"<<endl;
    }else{
        cout<<"La palabra no es palindroma!"<<endl;
    }
    

    system("pause");
    return 0;
}