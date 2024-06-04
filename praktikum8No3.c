#include <stdio.h>

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = 13;
    int X = 41; // mencari 41
    int Atas = 0, Bawah = N - 1;
    int Tengah;

    while (Atas <= Bawah) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            printf("Number %d found at index %d\n", X, Tengah);
            break;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    }

    if (Atas > Bawah) {
        printf("Number %d not found\n", X);
    }

    X = 8; // mencari 8
    Atas = 0, Bawah = N - 1;

    while (Atas <= Bawah) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            printf("Number %d found at index %d\n", X, Tengah);
            break;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    }

    if (Atas > Bawah) {
        printf("Number %d not found\n", X);
    }

    return 0;
}
