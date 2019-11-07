#include<iostream>
using namespace std;

int main(){
    int menorValor, maiorValor;

     cout << "Informe um numero: ";
     cin >> menorValor;

    maiorValor = menorValor;
    if(menorValor == 0){
        cout << maiorValor << endl;
    }

    while(1){
        cout << "Informe um numero: ";
        cin >> menorValor;

        if(menorValor == 0){
            break;
        }else if(maiorValor < menorValor){
            maiorValor = menorValor;
        }
    }
    cout <<"O maior valor informado eh: "<< maiorValor << endl;
    return 0;
}
