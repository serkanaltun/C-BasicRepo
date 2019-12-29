#include <stdio.h>
int main() {
  FILE *yaz;
  FILE *oku;
  int z,i;
  yaz = fopen("sinav.txt","w");
  for (i = 0; i < 10; i++) {
    fprintf(yaz,"%d\n",i );
  }
  fclose(yaz);

  oku = fopen("sinav.txt","r");
  while (!feof(oku)) {
  fscanf(oku,"%d",&z);
  printf("%d ",z);
  }
  fclose(oku);
}
