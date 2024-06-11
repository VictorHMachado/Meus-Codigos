#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matriz[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)   //zerar a matriz   0 == "-- "  ][  1 == "XX "
        {
            matriz[i][j] = 0;
        }   
    }
    char letra;
    int coluna, linha;

    while (scanf(" %c", &letra) != EOF) //ler a letra da coluna ate EOF (ctrl + Z duas vezes)
    {
        scanf("%d", &coluna);
        linha = N - (letra - 'A') - 1;

        matriz[linha][coluna - 1] = 1;
/*
        printf("%c - A = %d\n",letra, linha);
        printf("%d ", linha);
        printf("%d", coluna);     
*/
    }
    printf("  "); 
    for (int i = 1; i <= M; i++) //printar o numero das colunas
    {
        printf("%02d ", i );
    }
    printf("\n");
    
    for (int l = 0; l < N; l++)
    {
        printf("%c ", N +'A' - l - 1); //printar as letras da coluna ao lado


        for (int c = 0; c < M; c++)
        {
            if (matriz[l][c] == 0)
            {
                printf("-- ");
            }
            else if(matriz[l][c] == 1)
            {
                printf("XX ");
            }
            
        }
        printf("\n");
    }
    


    return 0;
}
