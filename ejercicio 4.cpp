#include <iostream>

using namespace std;
bool primo( int num);
int main()
{   
    bool funcPrimo;
    int num=0;
    cout<<"ingrese un numero";
    cin>>num;
    funcPrimo=primo(num);
    if (funcPrimo==0){
        cout<<num<<" no es un numero primo";
    }else{
        cout<<num<<" es numero primo";
    }
    
    
}
bool primo( int num){
    if (num<=1){
        return false;
    }
    for (int i=2;i=num/2;i++){
        if(num%i==0){
            return false;
        }else{
        return true;
            
        }
    }
}
