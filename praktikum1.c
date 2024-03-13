1.#include <stdio.h>

int main() {
    float v0, t, a, S;

    printf("Masukkan kecepatan awal (v0) dalam m/s: ");
    scanf("%f", &v0);
    printf("Masukkan waktu (t) dalam detik: ");
    scanf("%f", &t);
    printf("Masukkan percepatan (a) dalam m/s^2: ");
    scanf("%f", &a);
    S = v0 * t + 0.5 * a * t * t;

    
    printf("Jarak yang ditempuh adalah: %.2f meter\n", S);

    return 0;
}

2.#include <stdio.h>

int main() {
  int v0, t , g;
  float y;

  printf("masukan kecepatan awal dalam meter perdetik (v0): ");
  scanf("%d", &v0);
  printf("masukan waktu dalam detik (t): ");
  scanf("%d", &t);
  printf("masukan gravitasi dalam meter perdetik kuadrat (g): ");
  scanf("%d", &g);

y = v0 * t - 1/2 * (g * t * t);

printf("jarak yang ditempuh adalah: %.2f meter\n", y);
return 0;
}

3.#include <stdio.h>

int main() {
  float m, v, r, F; 
  printf("massa dalam kilogram (m): ");
  scanf("%f", &m); 
  printf("kecepatan dalam meter perdetik (v): ");
  scanf("%f", &v); 
  printf("jari_jari dalam meter (r): ");
  scanf("%f", &r); 

  // Diketahui bahwa gaya
  F = m * (v * v) / r;

  // Mencetak Hasil
  printf("gaya yang ditempuh adalah: %.2f Newton\n", F);
  return 0;
}

4.int main() {
    float r;
    const float PHI = 3.1415;
    float vb, vk;

    printf("Masukkan jari-jari dalam lingkaran: ");
    scanf("%f", &r);

    // Menghitung volume bola
    vb = (4.0 / 3) * PHI * r * r * r;

    // Menghitung volume kerucut
    vk = 0.5 * PHI * r * r * r;

    // Menampilkan hasil
    printf("Volume bola (Vb) adalah: %.2f meter kubik\n", vb);
    printf("Volume kerucut (Vk) adalah: %.2f meter kubik\n", vk);

    return 0;
}

5.int main() {
    float s1, s2, d1, d2;
    float luas, keliling:

  printf("masukan nilai s1:");
  scanf(%f, &s1);
  printf("masukan nilai s2: ");
  scanf("%f", &s2);
  printf("masukan nilai d1: ");
  scanf("%f", &d1);
  printf("masukan nilai d2: ");
  scanf("%f", &d2);

  //Luas Layang-layang
  luas = 1/2 * d1 * d2;

  //keliling layang-layang
  keliling = 2 * (s1 + s2);

  //menampilkan hasil
  printf("luas layang-layang adalah: %.2f\n", luas)
    return 0;
}

