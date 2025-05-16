#include <stdio.h>

void insertionSort(int *vetor, int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = *(vetor + i);
        j = i - 1;

        while (j >= 0 && *(vetor + j) > chave) {
            *(vetor + j + 1) = *(vetor + j);
            j--;
        }
        *(vetor + j + 1) = chave;
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

    insertionSort(vetor, n);

    printf("Vetor ordenado (Insertion Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}