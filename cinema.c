#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    int l, c;

    for (l = 0; l < n; l++)
    {
        for ( c = 0; c < m; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }
    int fileira;
    int coluna;

    while (scanf("%d", fileira) != EOF)
    {
        scanf("%d", &fileira);

    }
    

    return 0;
}
