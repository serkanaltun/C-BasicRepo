#include <stdio.h>
int main(){
  int dizi[5],i,a,j,b,top;
  float ort;
  for (i = 0; i <= 4; i++) {
    printf("Sayi giriniz: ");
    scanf("%d",&dizi[i]);
    top=top+dizi[i];
  }
  for (j = 0; j <= 4; j++) {
    printf("%d ",dizi[j]);

  }
  printf("\nToplam: %d\n",top);
  ort = (float)top/5;
  printf("Ortalamasi ise: %f",ort);
}
