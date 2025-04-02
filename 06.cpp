#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <vector <char>> inversa;
vector <vector <char>> aux;

int main(){
    string frase;
    int j=0;

    cout<<"Ingrese una frase"<<endl;
    getline(cin,frase);

    inversa.push_back(vector<char>());

    for(char letra:frase){
        if(letra==' '){
        j++;
        inversa.push_back(vector<char>());
        }else{
            inversa[j].push_back(letra);
        }
    }

    int h=0;
    for(int i=inversa.size()-1; i>=0;i--){
        for(char c:inversa[i]){
            cout<<c;
        }
        cout<<" ";
    }
    cout<<endl;
    

   

    system("pause");
    return 0;
}