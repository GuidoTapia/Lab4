#include <iostream>

using namespace std;

void descendente(int i){
    if(i>0){// caso base cuando el iterador llega a 0 la recursion se detiene
        cout << i << "\n";//impresion de debug
        descendente(i-1);
    }
}
void ascendente(int i){
    if(i>0){// caso base cuando el iterador llega a 0 la recursion se detiene
        ascendente(i-1);
        cout << i << "\n";//impresion de debug
    }
}
int main()
{
    int a;
    cin >> a;
    cout << "impresion de forma ascendente\n";
    ascendente(a);
    cout << "impresion de forma descendente\n";
    descendente(a);
    return 0;
}
