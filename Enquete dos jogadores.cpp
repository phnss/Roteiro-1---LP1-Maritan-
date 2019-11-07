#include<iostream>
#include<stdlib.h>
#include<locale>
#include<iomanip>

using namespace std;

float ContadorDeVotos(int jogador, int total){
    return ((float)jogador/total)*100;
}

int main(){
    cout << fixed << setprecision(1);//ter apenas uma casa decimal após a vírgula;
    setlocale(LC_ALL, "Portuguese");

    int arr[24], i, voto=0, maior=0;
    float porcentagem;

    cout <<"-------------*-------------*-------------" << endl;
    cout << "Enquete: Quem foi o melhor jogador?" << endl;
    cout <<"-------------*-------------*-------------\n\n" << endl;

    //Apenas para colocar todos os valores do array para zero, senão buga o programa;
    for(i=0;i<24;i++){
        arr[i] = 0;
    }

    while(1){
        cout <<"Número do jogador (0=fim): ";
        cin >> i;

        if(i == 0){
            break;
        }else if(i > 23 || i < 0){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
        }else{
            arr[i] += 1;
            voto++;
        }
    }

    cout << "\nResultado da votação:\nForam computados " <<voto<<" votos." << endl;
    cout << "\nJogador    Votos  %\n" << endl;

    for(i=1;i<24;i++){

        if(arr[i] > maior){
            maior = i;
        }

        if(arr[i] != 0){

            porcentagem = ContadorDeVotos(arr[i], voto);
            cout << i << "\t" << arr[i] << "\t" << porcentagem << "%" << endl;
        }
    }

    porcentagem = ContadorDeVotos(arr[maior], voto);
    cout << "O melhor jogador foi o número " << maior << ", com "<< arr[maior] <<" votos, correspondendo a "<< porcentagem <<"% do total de votos."<< endl;

    return 0;
}
