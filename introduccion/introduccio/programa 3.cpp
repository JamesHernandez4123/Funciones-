#include<iostream>
#include<conio.h>
using namespace std;

int encontrarMax(int x, int y);

int main(){
    int n1, n2, n3;
    cout<<"introduzca el valor del primer numero:"; cin>>n1;
    cout<<"Introduzca el valor del segundo numero:"; cin>>n2;
    cout<<"Introduzca el valor del tercer numero:"; cin>>n3;
    int max1= encontrarMax(n1,n2);
    int max2= encontrarMax(max1,n3);
    cout<<"El numero mayor es:"<<max2;

    getch();
    return 0;
}
int encontrarMax(int x, int y){
    int c;
    if(x>y){
        c=x;
    }
    else{
        c=y;}
    return c;
}
