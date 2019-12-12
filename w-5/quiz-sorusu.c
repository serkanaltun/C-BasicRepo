#include <stdio.h>
void fonk(int a[20]) {
  int i,tek,cif;
  float oran;
  for (i=0;i<20;i++) {
    if (a[i]%2==0)
      cif = cif + a[i];
    else
      tek = tek + a[i];
  }
  printf("\nCiftlerin toplami: %d\n",cif);
  printf("Teklerin toplami: %d\n",tek);
  oran = (float)cif/(float)tek;
  printf("Oranlari: %f\n",oran);
}
int main(){
  int a[20],i,n=1,j;
  for(i=0;i<20;i++){
    a[i]=n;
    n=(n*3)+1;
  }
  for (j=0;j<20;j++) {
    printf("%d ",a[j]);
  }
  fonk(a);
}
