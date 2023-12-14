#include <stdio.h>
#include <string.h>

void decodeMessage(char code[], char message[]) {
    int len = strlen(message);

    for (int i = 0; i < len; i++) {
        if (message[i] != ' ') {
            message[i] = (message[i] == code[i]) ? '*' : '#';
        }
    }
}

int main() {
    char code[101], message[101];
    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);
    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    if (strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    decodeMessage(code, message);

    int starCount = 0, hashCount = 0;
    int len = strlen(message);

    for (int i = 0; i < len; i++) {
        if (message[i] == '*') {
            starCount++;
        } else if (message[i] == '#') {
            hashCount++;
        }
    }

    printf("%s\n", message);
    printf("* = %d\n", starCount);
    printf("# = %d\n", hashCount);

    if (starCount >= hashCount) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}