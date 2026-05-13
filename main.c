#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros[] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}