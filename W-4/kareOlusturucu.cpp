#include <stdio.h>
int main(){

  char harf;
  int i,a,b;
  printf("Karakter giriniz: "); scanf("%c",&harf);
  getchar();
  printf("Sayi giriniz: "); scanf("%d",&a);
for (b=0; b<a; b++) {
  for (i = 0; i<a; i++) {
    printf("%c ",harf);
  }
  printf("\n");
}

}
