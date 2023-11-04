#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Output:\n%d %d\n", b, a); 
    } else {
        printf("Output:\n%d %d\n", a, b); 
    }

    return 0;
}
