#include <stdio.h>
#include <stdlib.h>

int comparar(const void* a, const void* b) {
    int valor1 = *((int*)a);
    int valor2 = *((int*)b);

    if (valor1 < valor2) {
        return -1;
    } else if (valor1 > valor2) {
        return 1;
    } else {
        return 0;
    }
}

int binary_search(int *lista, int item, int first, int end) {
    if (end < first) {
        return -1;
    }

    int medium = (first + end) / 2;

    if (lista[medium] == item) {
        return medium;
    } else if (item < lista[medium]) {
        return binary_search(lista, item, first, medium - 1);
    } else {
        return binary_search(lista, item, medium + 1, end);
    }
}

int main() {
    int lista[] = {1, 5, 7, 9, 3, 2};
    int size = sizeof(lista) / sizeof(lista[0]);

    qsort(lista, size, sizeof(int), comparar);

    int item = 9;
    int index = binary_search(lista, item, 0, size - 1);

    if (index != -1) {
        printf("O item %d foi encontrado no índice %d\n", item, index);
    } else {
        printf("O item %d não foi encontrado\n", item);
    }

    return 0;
}
