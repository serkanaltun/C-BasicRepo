#include <stdio.h>
int *fonk(int a1[5],int a2[5]){
  int i,carpim;
  for (i=0; i<5;i++) {
    carpim = a1[i] * a1[i];
    a2[i]=carpim;
  }
  return a2;

}
int main(){
  int a1[]={3,5,4,6,7};
  int a2[5];
  int *aa;
  int i;
  aa = fonk(a1,a2);
  for (i=0;i<5;i++) {
    printf("%d-",aa[i]);
  }
}
