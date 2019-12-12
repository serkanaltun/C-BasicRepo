#include <stdio.h>
void topla(int a,int b){
  int toplam,carp;
  toplam = a + b;
  printf("Toplam : %d\n",toplam);
  carp = a * b;
  printf("Carpim : %d",carp);
}
int main(){
int a=0;
int b=0;
printf("Bir sayi giriniz: "); scanf("%d",&a);
printf("Bir sayi giriniz: "); scanf("%d",&b);
topla(a,b);

}
