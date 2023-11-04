#include <stdio.h>

int main() {
    int number;
    const char *words[] = {"Nol", "Satuan", "Puluhan", "Belasan"};
    printf("Masukkan bilangan cacah (0-99): ");
    if (scanf("%d", &number) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    if (number < 0 || number > 99) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (number < 20) {
        if (number == 0) {
            printf("%s\n", words[0]);
        } else if (number < 10) {
            printf("%s\n", words[1]);
        } else {
            printf("%s\n", words[3]);
        }
    } else {
        int tens = number / 10;
        int ones = number % 10;
        if (ones == 0) {
            printf("%s\n", words[2]);
        } else {
            printf("%s\n", words[2]);
        }
    }
    return 0;
}
