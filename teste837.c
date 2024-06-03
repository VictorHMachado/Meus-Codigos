#include <stdio.h>

int main(int argc, char const *argv[])
{
    int j = 0, i;
    char sigla[4];
    char aero[100001];
    int sinal = 1;   //VARIAVEL AUXILIAR PARA INDICAR SE UMA LETRA NN SE ENCONTRA NA PALAVRA 
    // SINAL = 0, TUDO CERTO .. SINAL = 1, PARA TUDO! .. SINAL = 2, NEUTRO

    scanf("%s", aero);
    scanf("%s", sigla);

    int c;
    for (c = 0; aero[c] != '\0'; c++){}     //LER TAMANHO DA STRING

    int b = 3; //QUANTIDADES DE SIGLAS QUE VOU LER

    /*TRANSFORMA SIGLA PARA LETRAS MINUSCULAS*/
    for ( i = 0; i < 3; i++)
    {
        sigla[i] = sigla[i] + 'a' - 'A' ;
    }
    // printf("%s", sigla);

    if (sigla[2] == 'x')
    {
        b = 2;
    }


    for ( i = 0; i < b; i++)   //DE TECLA EM TECLA EM SIGLA -> SIGLA[i]
    {
        sinal = 1;
        for (; j < c; j++) //PERCORRER A PALAVRA AERO
        {
            if (sigla[i] == aero[j])
            {
                sinal = 0;
                j++;
                break;
            }
        }
        
        if (sinal == 1)
        {
            break;
        }
    }
    
    if (sinal == 0)
    {
        printf("Sim");
    }

    else if (sinal == 1)
    {
        printf("Nao");
    }


    return 0;
}
