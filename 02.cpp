#include <iostream>
#include <string>

using namespace std;

int main(){
    string palabra;
    int cantvo=0;

    cout<<"Ingrese la palabra del usuario para saber la cantidad de vocales"<<endl;
    getline(cin,palabra); //el getline xq solo agarra la primer palabra el cin

    for(char letra:palabra){
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
            cantvo++;
        }else if(letra=' '){
            continue;
        }
    }

    cout<<"La cantidad de vocales es: "<<cantvo<<endl;

    system("pause");
    return 0;
}