#include <stdio.h>
int main(){

  int sayi=0;
  int toplam=0;
  while (sayi!=-1) {

    printf("Bir sayi giriniz :"); scanf("%d",&sayi);

    if (sayi==-1)
              break;

    toplam+=sayi;

  }

  printf("\n-1 Girdiginiz icin program sonlandi. Girdiginiz sayilarin toplami : %d",toplam );








}
