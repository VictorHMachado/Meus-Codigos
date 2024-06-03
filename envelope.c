#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, K;
    scanf("%d %d", &n, &K);
    int B;
    int cont[K];
    for (int i = 0; i < K; i++)
    {cont[i] = 0;}
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B);
        cont[B-1] += 1;
    }
    int M = cont[0];
    
    for (int i = 0; i < K; i++)
    {
        if (M > cont[i])
        {
            M = cont[i];
        }
        
    }
    printf("%d", M);

    return 0;
}
