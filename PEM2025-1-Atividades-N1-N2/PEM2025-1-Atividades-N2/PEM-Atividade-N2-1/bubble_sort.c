#include <stdio.h>

void bubbleSort(int *vetor, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, n);

    printf("Vetor ordenado (Bubble Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}