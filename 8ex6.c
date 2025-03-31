#include<stdio.h>

int main() {
    int n, x, y;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite o indice x (0 a %d): ", n - 1);
    scanf("%d", &x);
    printf("Digite o indice y (0 a %d): ", n - 1);
    scanf("%d", &y);

    if (x >= 0 && x < n && y >= 0 && y < n)
        {
        int temp = A[x];
        A[x] = A[y];
        A[y] = temp;

        printf("Vetor apos a troca:\n");
        for (int i = 0; i < n; i++)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
        }

    return 0;
}
