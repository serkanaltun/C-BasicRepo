#include <stdio.h>
int main() {
  FILE *yaz;
  FILE *oku;

  char dizi1[40]; //string
  yaz = fopen("sinav.txt","a"); // a ekleme // w silip baştan yazma
  fprintf(yaz,"Boran");

  oku = fopen("sinav.txt","r"); // r = okuma
  fscanf(oku,"%s",dizi1); //dosyadan dizi1 e çek
  printf("%s",dizi1); // puts(dizi1);
}
