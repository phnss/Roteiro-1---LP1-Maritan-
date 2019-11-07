#include<iostream>
#include<stdlib.h>//permite o uso do rand() e srand();
#include<locale>
#include <iomanip>
#include<time.h>//utilizada para possibilitar o uso do time, fazendo o número ser aleatorio mesmo;

using namespace std;

int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(1);//ter apenas uma casa decimal após a vírgula;

    int vezes, i, dado, resultado;
    float a1,a2,a3,a4,a5,a6,a7,a8;
    bool c;

    a1=a2=a3=a4=a5=a6=a7=a8=0;//variaveis para pegar os valores de quantas fezes apareceram a face respectiva ao seu valor;

    while(1){
        cout << "Quantas vezes você quer lançar o dado?(Sair = 0): ";
        cin >> vezes;

        if(vezes == 0){
            break;
        }

        for(i = 0;i < vezes; i++){

            resultado = (rand() %8)+1;
            cout << "Face: " << resultado << endl;

            if(resultado == 1){
                a1 += 1;
            }else if(resultado == 2){
                a2 += 1;
            }else if(resultado == 3){
                a3 += 1;
            }else if(resultado == 4){
                a4 += 1;
            }else if(resultado == 5){
                a5 += 1;
            }else if(resultado == 6){
                a6 += 1;
            }else if(resultado == 7){
                a7 += 1;
            }else if(resultado == 8){
                a8 += 1;
            }
        }

        cout << "\nA porcentagem de vezes que apareceu a face 1: " << (100 * a1)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 2: " << (100 * a2)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 3: " << (100 * a3)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 4: " << (100 * a4)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 5: " << (100 * a5)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 6: " << (100 * a6)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 7: " << (100 * a7)/vezes << "%";
        cout << "\nA porcentagem de vezes que apareceu a face 8: " << (100 * a8)/vezes << "%\n\n";

        a1=a2=a3=a4=a5=a6=a7=a8=0;//para zerar os valores para o próximo uso;
    }
    return 0;
}
