#include<iostream>
#include<conio.h>
using namespace std;

// prototipos de Funcion
void pedirDatos();
void mult(float x, float y);

float n1,n2;

int main(){
    pedirDatos();
    mult(n1,n2);

    getch();
    return 0;
}
void pedirDatos(){
    cout<<"Digite 2 numeros:";
    cin>>n1>>n2;

}
void mult(float x, float y){
    float multiplicacion = x+y;
    cout<<" La suma  es:"<<multiplicacion<<endl;
}
