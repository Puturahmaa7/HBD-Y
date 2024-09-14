#include <stdio.h>
#include <string.h>

int main() {
    char A[51];
    char B[51];

    printf("Masukkan Kata Pertama: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Masukkan Kata Kedua: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';

    printf("Kata Pertama dan Kata Kedua: \n");
    if (strcmp(A, B) == 0) {
        printf("IDENTIK\n");
    } else if (strlen(A) == strlen(B)) {
        printf("MIRIP\n");
    } else {
        printf("BERBEDA\n");
    }

    return 0;
}