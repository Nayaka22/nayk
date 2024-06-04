#include <stdio.h>

// Count Sort
void countSort(int array[], int size) {
    int output[10];
    int count[10];
    int max = array[0];

    // Mencari elemen terbesar dalam array
    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }

    // Menginisialisasi count array dengan 0
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    // Menyimpan jumlah setiap elemen unik
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    // Menyimpan jumlah kumulatif setiap array
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Menemukan indeks setiap elemen dari array asli dalam count array, dan
    // menempatkan elemen dalam output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    // Menyalin elemen dari output array ke array asli
    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

// Selection Sort
void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int max_idx = step;
        for (int i = step + 1; i < size; i++) {
            // Untuk urutan menurun ubah > menjadi <
            if (array[i] > array[max_idx])
                max_idx = i;
        }

        // Menukar elemen max dengan elemen pertama
        int temp = array[step];
        array[step] = array[max_idx];
        array[max_idx] = temp;
    }
}

int main() {
    int T[] = {7, 1, 5, 5, 3, 9, 6}; // a diganti dengan 5 dan b diganti dengan 9
    int N = sizeof(T) / sizeof(T[0]);

    // Urutkan tabel T dengan menggunakan algoritma Count Sort
    countSort(T, N);
    printf("Hasil Count Sort: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    // Urutkan tabel T dengan menggunakan algoritma Selection Sort secara descending
    selectionSort(T, N);
    printf("Hasil Selection Sort secara descending: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
