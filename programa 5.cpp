#include<iostream>
using namespace std;
int funcion_factorial(int num);

int main(){
    int a;
    cout<<"Ingrese un valor: "<<endl;
    cin>>a;
    cout<<"El factorial de "<<a<< " es " <<funcion_factorial(a)<<endl;
    return 0;
}

int funcion_factorial(int num){
    int fact=1;
    while(num>0){
        fact=fact*num--;
    }
    return fact;

}
