#include <stdio.h>
void topla(int a,int b,int c){
  int toplam;
  toplam=(c + a) * b;
  FILE *adres;
  adres = fopen("sinav.txt","w");
  fprintf(adres, "%d",toplam);
  fclose(adres);
}
int main() {
int a = 5 , b = 10 , c = 20;
int z;
topla(a,b,c);

FILE *adres2;
adres2 = fopen("sinav.txt","r");
fscanf(adres2,"%d",&z);
printf("%d",z);
fclose(adres2);
}
