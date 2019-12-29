#include<stdio.h>
int main(){
/*
	char isim[20]="bora sakara";
	printf("%s",isim);
	char *kelime="\n bugun kotu bir gun geciriyorum";// string tanimlayacagiz ins
	printf("%s",kelime);
	char dizi1[50];
	char *dizi2[40];
	printf("\nilk cumleyi giriniz=");
	gets(dizi1);//ozel string yazdirma
	printf("\n%s",dizi1);
	puts(dizi1);

	printf("\n ikinci cumleyi giriniz=");
	scanf("%s",&dizi2);
	printf("\n%s",dizi2);
	puts("glkdfjgklsdfjgdfg");
*/
/*
	FILE *adres;
	adres=fopen("ornek.txt","w");//"w" acip yazma ustüne // yazdiklarini copy paste etmek "a"//
	fprintf(adres,"merhaba");
	fprintf(adres,"\n%d",465);
	fprintf(adres,"\n%d",6789);
*/
/*
	FILE *adres;
	adres=fopen("ornek.txt","w");
	int i=0;
	for(i=0; i<10; i++){
		fprintf(adres,"%d\n",i*2);
	}

	fclose(adres);

	FILE *adres2;
	adres2=fopen("ornek.txt","r");
	int z;
	while(!feof(adres2)){
	fscanf(adres2,"%d",&z);
	printf("%d ",z);
    }
    fclose(adres2);
*/

    	FILE *adres2;
	adres2=fopen("ornek.txt","r");
	int z;
	int dizi[10];
	int i=0;
	while(!feof(adres2)){
	fscanf(adres2,"%d",&z);
	printf("\n sayi=%d",z);
	dizi[i]=z;
	i++;
    }
    int j;
    int toplam=0;
    int enbuyuk=dizi[0];
    int enkucuk=dizi[0];
    for(j=0; j<i; j++)
	{

    	toplam=toplam+dizi[j];

    	if(dizi[j]>enbuyuk)

		{
    		enbuyuk=dizi[j];
		}

		if(dizi[j]<enkucuk)

		{
			enkucuk=dizi[j];
		}
	}

	printf("\ ortalama=%f",(float)toplam/i);
	printf("\n enbuyuk=%d",enbuyuk);
	printf("\n enkucuk=%d",enkucuk);


    fclose(adres2);

    /*
    FILE * adres3;
    adres3=fopen("metin.txt","w");
    char harf;
	for(i=0; i<10; i++){
	printf("\n%d. harf=",i+1);
	scanf("%c",&harf);
	getchar();
	fprintf(adres3,"%c",harf);
    }
    fclose(adres3);
    */
    /*
    FILE * adres4;
    adres4=fopen("sayfa.txt","w");
    char cumle[100];
    int i;
    for(i=0; i<5; i++){
    printf("\n %d. bir cumle giriniz=",i+1);
    gets(cumle);
    fprintf(adres4,"%s \n",cumle);
}
    fclose(adres4);

    */
    /*
    FILE * adres4;
    adres4=fopen("sayfa.txt","r");
    int i=1;
    char okunan[100];
    while(fgets(okunan,100,adres4)!=NULL){
    	printf("%d. cumle=%s",i,okunan);
    	i++;
	}
    */







}
