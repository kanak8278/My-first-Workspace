# include <stdio.h>
int main()
{
    int M;
    int N;
    scanf("%d", &M);
    scanf("%d", &N);
    int totalBlocks= M*N;
    int maxDominoes= totalBlocks/2;
    printf("%d", maxDominoes);
}