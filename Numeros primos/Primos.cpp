/*Leer primero X. El dato X indica la cantidad de números que se leerán desde el teclado. 
En las siguientes X líneas se encuentran los datos de entrada. 
Al finalizar se tienen dos números enteros A y B, que indican el rango.
Imprima la cantidad de números que son primos en el rango desde A hasta B.*/

#include <iostream>

using namespace std;

int main()
{

    int a, num;
    cin >> a;
    int vec[a];

    for (int i = 0; i < a; i++)
    {
        cin >> num;
        vec[i] = num;
    }

    int rango1=0, rango2=0;
    cin >> rango1;
    cin >> rango2;
    
    int contaprimos = 0;

    for (int w = 0; w < a; w++)
    {
        int primo = 1;
        if (vec[w] >= rango1 && vec[w] <= rango2 && vec[w]!=1 && vec[w]!=0)
        {
            
            for (int x = 2; x < vec[w]; x++)
            {
                if (vec[w] % x == 0)
                {   
                    primo = 0;
                    break;
                }
            }

            if (primo)
            {
                contaprimos = contaprimos + 1;
            }
        }
    }
    cout<< contaprimos;

    system("pause");

    return 0;
}