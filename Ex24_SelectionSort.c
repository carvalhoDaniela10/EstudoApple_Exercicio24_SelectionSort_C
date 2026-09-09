#include <stdio.h>

// O Selection Sort funciona encontrando o menor (ou maior) elemento no array e o movendo para a posição correta. 

void selectionSort(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        int min_idx = i; // resetando o menor índice
        for (int j = i + 1; j < n; j++)
            if (vetor[j] < vetor[min_idx]) // checa se o valor da atual posição é menor que o valor da posição anterior
                min_idx = j; //  se for verdadeira, a variável armazena o índice do menor número armazendado no vetor

        // logo, é realizada a troca do menor valor para as primeiras posições de forma crescente (acompanhando o contador do for)
        int temp = vetor[min_idx];
        vetor[min_idx] = vetor[i];
        vetor[i] = temp;
        for (int x = 0; x < n; x++) 
            printf("%d ", vetor[x]);
        printf("\n");
    }
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vetor) / sizeof(vetor[0]); // n = 28 / 4 -> n == 7
    // está pegando o valor total de bytes do vetor e dividindo pela quantidades de bytes de uma única posição e armazendando em N

    printf("Vetor desordenado: \n");
    for (int i = 0; i < n; i++) // o for está percorrendo o vetor e printando os valores armazenados em cada posição
        printf("%d ", vetor[i]); // saídas: 64 | 34 | 25 | 12 | 22 | 11 | 90
    printf("\n\n");

    selectionSort(vetor, n);

    printf("\nVetor ordenado: \n");
    for (int i = 0; i < n; i++) // o for está percorrendo o vetor e printando os valores armazenados em cada posição
        printf("%d ", vetor[i]); // saídas: 11 | 12 | 22 | 25 | 34 | 64 | 90
    printf("\n");

    return 0;
}
