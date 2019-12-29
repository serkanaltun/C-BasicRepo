#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  char dizi1[16]={'A','S','E','B','O','R','A','N','1','6','4','X','Q','L','8','!'};
  int i,a;
  srand(time(0));
  FILE *yaz;
  yaz = fopen("sinav2.txt","a");
  for (i = 0; i < 8; i++) {
    a=rand()%16;
    printf("%c",dizi1[a]);
    fprintf(yaz, "%c",dizi1[a]);
  }
  fprintf(yaz, "\n");
  fclose(yaz);
}
