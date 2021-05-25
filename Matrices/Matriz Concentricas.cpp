/*Un entero n seguido de una matriz cuadrada de n*n enteros. 
Puedes suponer que 1<=n<=350 y que n es impar.
Un 1 si la matriz es concéntrica y un 0 en otro caso.*/

#include <iostream>

using namespace std;

int main()
{

    int a, aux, conta;
    cin >> a;
    int x[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> x[i][j];
        }
    }

    conta = 0;
    int flag = 0;
    while (((a - 1) - ((a - 1) / 2)) != conta)
    {
        int i = (a - a) + conta;
        for (int j = conta; j < a - conta; j++)
        {
            if (x[i][j] != conta)
            {
                cout << 0;
                flag = 1;
                break;
            }
        }
        i = (a - 1) - conta;
        for (int j = conta; j < a - conta; j++)
        {
            if (x[i][j] != conta && flag == 0)
            {
                cout << 0;
                flag = 1;
                break;
            }
        }

        int j = (a - a) + conta;
        for (int i = conta + 1; i < (a - conta) - 1; i++)
        {
            if (x[i][j] != conta && flag == 0)
            {
                cout << 0;
                flag = 1;
                break;
            }
        }
        j = (a - 1) - conta;
        for (int i = conta + 1; i < (a - conta) - 1; i++)
        {
            if (x[i][j] != conta && flag == 0)
            {
                cout << 0;
                flag = 1;
                break;
            }
        }
        conta = conta + 1;

        if (flag == 1){
            break;
        }
    }

    if (x[conta][conta] != conta && flag == 0)
    {
        cout << 0;
        flag = 1;
    }

    if (flag == 0)
    {
        cout << 1;
    }

    system("pause");
    return 0;
}
