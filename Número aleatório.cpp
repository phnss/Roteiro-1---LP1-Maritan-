#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor, resposta;

    resposta = rand() % 100;
    cout << "Adivinhe o n�mero entre 1 e 100." << endl;

    while(1){
        cout << "Seu palpite: ";
        cin >> valor;

        if(valor < resposta){
            cout << "Muito baixo. Tente novamente" << endl;
        }else if(valor > resposta){
            cout << "Muito alto. Tente novamente" << endl;
        }else{
            cout << "Parab�ns. Voce adivinhou o numero" << endl;
            break;
        }
    }
    return 0;
}
