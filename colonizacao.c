#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int matriz[n][n/2];
    int l, c;
    int matrizI[n][1 + n/2];
    //printf("%d", n/2);
    //se n é par
    if(n%2 == 0){
    for (l = 0; l < n; l++)
    {
        for ( c = 0; c < n/2; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
        
    }

    for (l = 0; l < n; l++)
    {
        for ( c = 0; c < n/2; c++)
        {
            printf("%d ", matriz[l][c]);
        }
        for (c = n/2 - 1; c >= 0; c--)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    }
    
    //se n não é par
    else if (n%2 == 1)
    {
        for (l = 0; l < n; l++)
        {
            for ( c = 0; c < 1 + n/2; c++)
            {
            scanf("%d", &matrizI[l][c]);
            }
        }
        for (l = 0; l < n; l++)
        {
            for ( c = 0; c < 1 + n/2; c++)
            {
                printf("%d ", matrizI[l][c]);
            }
            for (c = n/2 - 1; c >= 0; c--)
            {
                printf("%d ", matrizI[l][c]);
            }
            printf("\n");
        }
    }
    
    
    

    return 0;
}