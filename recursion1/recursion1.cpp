#include <iostream>

using namespace std;
void primo(int n, int i=2){
    if((n%i==0 && n!=2) || n < 2){//se calcula el residuo entre el numero a averiguar si es primo y
                                  //el divisor actual si es igual a cero significa que es multiplo y por lo tanto no es primo caso especial el 2
        cout<<"no es primo\n";
    }else if(i>n/2){//si el divisor supera la mitad del numero y no se hallo divisor exacto se asume que no existe divisor alguno
        cout<<"es primo\n";
    }else{
        primo(n,i+1);//llamada recursiva
    }
}
int main()
{
    int a;
    while(true){//repeticion de pedido de ingreso de numero para averiguar si es primo o no
        cout<<"Ingrese un numero para averiguar si es primo:\n";
        cin >> a;
        primo(a);
    }
    return 0;
}
