#include <iostream>
using namespace std;
int main(){
    /*Vengono definite le variabili con n=quanti numeri visualizzare, i=quante volte eseguire il calcolo,
     il primo e secondo numero, e il numero successivo*/
    int n=0, i=0, primo_numero=1, secondo_numero=0, numero_successivo=0;
        cin >> n;
        if(n>=2){
            for(i=0;i<n;i++){
    /*Vengono definite le operazioni di riassegnazione ricorsiva per comporre la serie*/
                numero_successivo = primo_numero + secondo_numero;
                primo_numero = secondo_numero;
                secondo_numero = numero_successivo;
                cout << numero_successivo << endl;
                }
        }else{
            cout << "errore" << endl;
        }return 0;
}
