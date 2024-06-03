#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    int N, M;
    scanf("%d %d", &N, &M);
    char matrix[M][N + 1];
    int Nt = 0;

    for (int j = 0; j < N; j++)   //LER MATRIX
        {
            scanf("%s", matrix[j]);
        }

    //SÓ UM PRINT PRA VER    
    /*for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }*/
    
    //CONTAR O NUMERO DE TORRES
    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N + 1; j++)
            {
                if (matrix[i][j] == 't')
                {
                    Nt++;
                }
            }
        }
 
    int visao[Nt]; //VETOR CONTENDO A VISAO DE CADA UMA DAS TORRES, TORRE[0], TORRE[1], ...
        
    for (t = 0; t < Nt; t++)
    {
        scanf("%d", &visao[t]);
    }
    
    t = 0;
    
    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N + 1; j++)
            {
                if (matrix[i][j] == 't')
                {

                    int l, c;
                    for (l = visao[t]; l > 0; l--)
                    {
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i - l][j - c] = '*';
                        }
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i + l][j + c] = '*';
                        }
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i - l][j + c] = '*';
                        }
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i + l][j - c] = '*';
                        }

                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i][j - c] = '*';
                        } 
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i][j + c] = '*';
                        }                         
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i + l][j] = '*';
                        } 
                        for ( c = visao[t]; c > 0; c--)
                        {
                            matrix[i - l][j] = '*';
                        }                         
                    }
                    
                /*
                    for (int d = 1; d <= visao[t]; d++)
                    {
                        matrix[i  - d][j] = '*';
                        matrix[i + d][j ] = '*';
                        matrix[i ][j - d] = '*';
                        matrix[i ][j + d] = '*';

                        matrix[i - d][j - d] = '*';
                        matrix[i +  d ][j +  d] = '*';
                        matrix[i + d][j -  d] = '*';
                        matrix[i - d][j + d] = '*';                           
                    }
                   */ 
      
                    
                    t++;
                }
            }
        }


    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

