#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

vector <vector <char>> minuscula;
vector <vector <char>> mayuscula;
vector <vector <char>> alternado;
vector <vector <char>> aux;

int main(){
    string pal;
    bool exit=false;
    int j=0, op=0;

    cout<<"Ingrese una palabra u oracion"<<endl;
    getline(cin,pal);
    
    aux.push_back(vector<char>());

    for(char letra:pal){
        if(letra==' '){
            j++;
            aux.push_back(vector<char>());
            continue;
            
        }else{
            aux[j].push_back(letra); 
        }
    }

    
    int k=0;
    for(int i=0; i<aux.size(); i++){
        
            mayuscula.push_back(vector<char>());
            minuscula.push_back(vector<char>());
            alternado.push_back(vector<char>());

            bool alternar=true;
            for(char c:aux[i]){
                mayuscula[k].push_back(toupper(c));
                minuscula[k].push_back(tolower(c));
                alternado[k].push_back(alternar ? toupper(c):tolower(c));
                alternar= !alternar;
            }
            k++;
        
    }
    

    do{
        cout<<"Seleccione una de las siguientes opciones"<<endl;
        cout<<"1. Mostrar toda la oracion en mayuscula"<<endl;
        cout<<"2. Mostrar toda la oracion en minuscula"<<endl;
        cout<<"3. Mostrar oracion alternando una mayuscula y minuscula"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>op;

        switch(op){
            case 1:
            cout<<"La oracion en mayuscula es:"<<endl;
            for(int i=0; i<mayuscula.size(); i++){
                for(int h=0; h<mayuscula[i].size(); h++){
                    cout<<mayuscula[i][h];
                }
                cout<<" ";
            }
            cout<<endl;

            break;
            case 2:
            cout<<"La oracion en minuscula es:"<<endl;
            for(int i=0; i<minuscula.size(); i++){
                for(int h=0; h<minuscula[i].size(); h++){
                    cout<<minuscula[i][h];
                }
                cout<<" ";
            }   
            cout<<endl;

            break;
            case 3:
            cout<<"La oracion alternando en minuscula y mayuscula es:"<<endl;
            for(int i=0; i<alternado.size(); i++){
                for(int h=0; h<alternado[i].size(); h++){
                    cout<<alternado[i][h];
                }
                cout<<" ";
            }
            cout<<endl;
            break;
            case 4:
            exit=true;
            break;
        }

    }while(exit==false);

   

    system("pause");
    return 0;
}