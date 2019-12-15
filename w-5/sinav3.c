#include <stdio.h>
int carp(int a, int b){
int carpim;
carpim = a * b;
}
int main(){
  int a,b;
  int c;
  printf("Bir sayi: "); scanf("%d",&a);
  printf("Bir sayi: "); scanf("%d",&b);
  c = carp(a,b);
  printf("Carpim: %d",c);
}
