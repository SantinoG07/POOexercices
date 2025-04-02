#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

vector <char> vpal1;
vector <char> vpal2;

int main(){
    string palabra1,palabra2;
    int j=0;

    cout<<"Ingrese una palabra"<<endl;
    getline(cin,palabra1);
    cout<<"Ingrese otra palabra"<<endl;
    getline(cin,palabra2);


    if(palabra1.length()!=palabra2.length()){
        cout<<"No son anagramas"<<endl;
    }else if(palabra1.length()==palabra2.length()){
        for(char letra:palabra1){
            vpal1.push_back(letra);
        }
        for(char letra:palabra2){
            vpal2.push_back(letra);
        }
        sort(vpal1.begin(), vpal1.end());
        sort(vpal2.begin(), vpal2.end());
        if(vpal1==vpal2){
            cout<<"Son anagramas"<<endl;
        }else{
            cout<<"No son anagramas"<<endl;
        }
    }

   

    system("pause");
    return 0;
}