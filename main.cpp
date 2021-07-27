#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){

    LinkedList lst;
    int dato,size;
    cout<<"Cantidad de numeros: "<<endl;
    cin>>size;
    cout<<"Ingrese los numeros"<<endl;
    for(size_t i=0;i<size;i++){
        cin>>dato;
        lst.insert(dato);

    }
    
    cout<<"\nLista Ordenada."<<endl;
    cout<<lst<<endl;

    return 0;
}