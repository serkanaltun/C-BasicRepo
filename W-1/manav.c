#include <stdio.h>
int main() {
 int a;
 int tutar;
 char karakter;
 puts("\t\tFURKAN MANAVA HOS GELDINIZ\n");
 puts("============================================================\n");
 puts("    Satin alabileceginiz urunlerin kodlari su sekilde ;\n");
 puts("\t Karpuz satin almak icin \"k\" tuslayin");
 puts("\t  Biber satin almak icin \"b\" tuslayin");
 puts("\tPatates satin almak icin \"p\" tuslayin");
 puts("\t  Cilek satin almak icin \"c\" tuslayin\n");
 puts("============================================================");

 printf("\t   Hangi urunden satin alacaksiniz: "); scanf("%c",&karakter);
 getchar();

 if (karakter=='k' || karakter=='b' || karakter=='p' || karakter=='c'){

    printf("============================================================\n");
    printf("\t  Kac kilogram almak istersiniz ? : "); scanf("%d",&a);

    if(karakter=='k'){
    printf("============================================================\n");
    printf("\t    %d kilogram karpuz %d tl yapiyor.\n",a,a*2);
    }
    else if(karakter=='b'){
    printf("============================================================\n");
    printf("\t    %d kilogram biber %d tl yapiyor.\n",a,a*3);
    }
    else if(karakter=='p'){
    printf("============================================================\n");
    printf("\t    %d kilogram patates %d tl yapiyor.\n",a,a*5);
    }
    else if(karakter=='c'){
    printf("============================================================\n");
    printf("\t    %d kilogram cilek %d tl yapiyor.\n",a,a*10);
    }


 }
 else{
   puts("============================================================");
   printf("Urun kodunu yanlis girdiniz lutfen programi yeniden baslatin.\n");
 }






}
