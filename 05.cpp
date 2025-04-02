#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    string palabra;
    int cantpal=0;
    bool flag=true;

    cout<<"Ingrese una frase "<<endl;
    getline(cin,palabra);

    for(char letra:palabra){
        if(letra==' '){
        cantpal++;
        }else{
            continue;
        }
    }

   
    cout<<"La cantidad de palabras es:"<<cantpal+1<<endl;
    
    

    system("pause");
    return 0;
}