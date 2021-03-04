// este programa indica entre dos numeros cual es el mayor
#include<iostream>
#include<conio.h>

using namespace std;
//prototipos de la funcion

void Max(int a, int b);
void pedirDatos();

int a, b;

int main(){
    pedirDatos();
    Max(a,b);

    return 0;
    }
void pedirDatos(){
    cout<<"Introduzca el valor del primer numero:";cin>>a;
    cout<<"Introduzca el valor del segundo numero:";cin>>b;
}
void Max(int a, int b){
    if(a==b){
        cout<<"Ambos numeros son iguales";
    }
    else if(a>b){
        cout<<"El numero mayor es:"<<a;
    }
    else{
        cout<<" El numero mayor es:"<<b;
    }
}
