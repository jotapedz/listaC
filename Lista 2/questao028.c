#include <stdio.h>

int main() {
    unsigned char x, y;
    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &x);
    printf("Digite o valor de Y (>=5 e <=251): ");
    scanf("%hhu", &y);
    if (y < 5 || y > 251) {
        printf("Valor de Y invalido. Deve ser >=5 e <=251.\n");
        return 1;
    }
    /*unsigned char mask = 0x1F; // Máscara com 5 bits ligados (0b00011111)
    for (int i = y-4; i <= y+4; i++) {
        if (i >= 0 && i <= 255) {
            unsigned char value = (x & mask) | (i & ~mask);
            printf("Valor original de %d: %d\n", i, i);
            printf("Valor modificado de %d: %d\n", i, value);
        }
    }*/
    return 0;
}
