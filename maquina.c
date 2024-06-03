#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int matriz[3][n];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }   
    //matriz[0][] -> vetor1         //matriz[1][] -> vetor2      //matriz[3][] -> operador
    int vetorR[n];

    for (int c = 0; c < n; c++)   //percorrer cada coluna e verificar o operador lá embaixo
        {
            if (matriz[2][c] == 0)
            {
                vetorR[c] = matriz[0][c] + matriz[1][c];
            }
            else if(matriz[2][c] == 1)
            {
                vetorR[c] = matriz[0][c] - matriz[1][c];
            }
            else if(matriz[2][c] == 2)
            {
                vetorR[c] = matriz[0][c] * matriz[1][c];
            }
            else if(matriz[2][c] == 3)
            {
                vetorR[c] = matriz[0][c] / matriz[1][c];
            }                        
        }
        
    for (int v = 0; v < n; v++)
    {
        printf("%d ", vetorR[v]);
    }
    
    

    return 0;
}