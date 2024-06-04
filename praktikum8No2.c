#include <stdio.h>

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = 13;
    int X = 41; // mencari 41
    int Atas = 1, Bawah = N;
    int Found = 0; // Mula-mula belum ketemu
    int Tengah;

    while (Atas <= Bawah && !Found) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            Found = 1;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    }

    if (Found) {
        printf("Number %d found at index %d\n", X, Tengah);
    } else {
        printf("Number %d not found\n", X);
    }

    X = 8; // mencari 8
    Atas = 1, Bawah = N;
    Found = 0; // Mula-mula belum ketemu

    while (Atas <= Bawah && !Found) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            Found = 1;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    }

    if (Found) {
        printf("Number %d found at index %d\n", X, Tengah);
    } else {
        printf("Number %d not found\n", X);
    }

    return 0;
}
