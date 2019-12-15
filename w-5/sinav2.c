#include <stdio.h>
void fonk(int array[15]) {
  int i,cif,tek,toplam;
for (i=0; i<15; i++) {
  toplam = toplam + array[i];
  if(array[i]%2==0){
    cif = cif + array[i];
  }
  else{
    tek = tek + array[i];
  }

}
printf("\nToplam/13: %f Tek / Cift: %f",(float)toplam/13,(float)cif/tek);
}
int main(){
int i,r=1;
int array[15];
for(i=0;i<15;i++){
array[i]=r;
r = (r*4)+1;
printf("%d ",array[i]);
}
fonk(array);
}
