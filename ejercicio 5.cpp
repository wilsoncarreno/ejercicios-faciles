#include <iostream>

using namespace std;

int factorial( int num);

int main(){   
    int factor;
    int num=0;
    cout<<"ingrese un numero";
    cin>>num;
    factor=factorial(num);
    cout<<factor<<" es el factorial de "<<num;
}
int factorial( int num){
    int operacion=1;
    for (int i=1;i<num+1;i++){
        operacion=operacion*i;
    }
    return operacion;
}
