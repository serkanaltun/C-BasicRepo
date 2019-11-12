#include <stdio.h>
int main(){
/*
  int i,j,n;
  printf("Sayi giriniz: "); scanf("%d",&n);
  for (i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("* ");
    }
    printf("\n");
  }
*/
int i,j,n=10;
printf("Bir sayi giriniz: "); scanf("%d",&n);
for (n;n>=1;n--){
  for(j=1;j<=n;j++){
    printf("* ");
  }
  printf("\n");
}




}
