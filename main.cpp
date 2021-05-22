#include <iostream>

using namespace std;

int main()
{
    int cont = 1, numero, cont2 = 0;
    while (cont2 == 0){
        cin >> numero;
        if (numero == 0){
            cont2 = 1;
        }else{
            while (cont <= numero){
                if (cont == 1){
                    cout << cont;
                }else{
                    cout << " " << cont;
                }
                if (cont == numero){
                    cout <<endl;
                }
                cont++;
            }
        }
        cont = 1;
    }
    return 0;
}
