#include <iostream>

using namespace std;

void iteracion(int i){
    if(i>0){// caso base cuando el iterador llega a 0 la recursion se detiene
        //cout << i << "\n";//impresion de debug
        iteracion(i-1);
    }
}
int main()
{
    iteracion(9);
    return 0;
}
