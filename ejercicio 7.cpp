
#include <iostream>
#include <math.h>

using namespace std;

int poten(int x, int y);
int main (){
    int num1=0, num2=0,retorno;
    cout<<"ingrese un numero"<<endl;
    cin>>num1;
    cout<<"ingrese a la potencia que desea elevar el numero digitado anteriormente "<<endl;
    cin>>num2;
    retorno=poten(num1,num2);
    cout<<retorno;
    return 0;
}
int poten( int x,  int y){
    int resul;
    resul=pow(x,y);
    return resul;
}

