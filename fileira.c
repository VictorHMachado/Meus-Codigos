#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int x;
    scanf("%d", &x);
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    
    int l, c, cont = 0;

    for (c = 0; c < n; c++)
    {
        if(cont == x){break;}

        cont = 0;
        for ( l = 0; l < n; l++)
        {
            if (matrix[l][c] == 0)
            {
                cont++;
            }
            if (cont > 0 && matrix[l][c] == 1){
                cont = 0;
            }
            
            
            if(cont == x){break;}
        }
        
    }
    //printf("cont: %d coluna: %d", cont, c);

    if (cont == x)
    {
        printf("%d", c - 1);
    }
    else{
        printf("N");
    }

    return 0;

}