#include <stdio.h>
#define NilaiUndef -1

// Sequential Search with Sentinel
void SEQ_SearchWithSentinel(int T[], int N, int X) {
    int idx = N + 1;
    T[N + 1] = X; // pasang sentinel
    int i = 1;

    // Pencarian
    while (T[i] != X) { // tidak perlu tes terhadap batas i, karena pasti berhenti
        i++;
    }

    // Evaluasi hasil pencarian
    if (i <= N) {
        idx = i; // X ditemukan pada posisi i
    } else {
        idx = NilaiUndef; // sentinel terdeteksi; elemen tidak ketemu
    }

    if (idx != NilaiUndef) {
        printf("Number %d found at index %d\n", X, idx);
    } else {
        printf("Number %d not found\n", X);
    }
}

int main() {
    int r[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29};
    int N = sizeof(r) / sizeof(r[0]);
    SEQ_SearchWithSentinel(r, N, 52); // mencari 52
    SEQ_SearchWithSentinel(r, N, 10); // mencari 10
    return 0;
}
