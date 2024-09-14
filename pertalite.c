#include <stdio.h>
int Cek_Bilangan_Prima(int N){
    if (N<=1) {
        return 0;
    }
    for (int i=2; i<N; i++) {
        if (N%i==0) {
        return 0;
     }
    }
    return 1;
}
int main() {
    int N;
    printf("Masukkan Bilangan yang Ingin di Cek: ");
    scanf("%d", &N);

    if (Cek_Bilangan_Prima(N)) {
        printf("PRIMA\n");
    }   else{
        printf("BUKAN\n");
    }
    return 0;
}