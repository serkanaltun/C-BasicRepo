#include <stdio.h>
int main(){
  int a=0,toplam=0;
  while (a!=-1) {
    toplam = toplam + a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    }
  printf("Toplam: %d",toplam);
}
