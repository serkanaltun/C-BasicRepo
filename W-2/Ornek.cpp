#include <stdio.h>
int main(){

	/*
	int a;

	printf("Yasinizi Giriniz: "); scanf("%d",&a);
	if(a<18 || a>=65){
		puts("Calismamalisiniz");
	}
	else{
		puts("Calismak icin uygun yas araligindasiniz.");
	}
	*/

//BA�VURU FORMU
	/*
	char ad[20];
	char soy[20];
	int yas;
	int durum;
	printf("\t\tIS BASVURU FORMU\n");
	printf("==========================================================\n\n");
	printf("   Adiniz: "); scanf("%s",ad);
	printf("Soyadiniz: "); scanf("%s",soy);

	printf("\nHos geldin %s %s rica etsem yasini da yazar misin : ",ad,soy); scanf("%d",&yas);

	if(yas<18 || yas>65){
		puts("==========================================================\n");
		puts("Sirketimizde calismak icin uygun yas araliginda degilsiniz uzgunum.");
	}
	else{
		puts("==========================================================\n");
		puts("Sirketimizde calismak icin uygun yas araligindasiniz.");

		printf("\nSirketimizde calisabileceginiz pozisyonlar.\n\t1)Yazilim Muhendisi \n\t2)Veri Analisti \n\t3)IT Muduru\nCalismak istediginiz pozisyonun numarasini giriniz: "); scanf("%d",&durum);

	switch(durum){
		case 1:
			printf("Yazilim Muhendisi olarak is basvurunuz alinmistir.");
			break;
		case 2:
			printf("Veri Analisti olarak is basvurunuz alinmistir.");
			break;
		case 3:
			printf("IT Muduru olarak is basvurunuz alinmistir.");
			break;
		default:
			printf("Girdiginiz numara gecersiz is basvurusunu tekrar yapmayi deneyin.");
			break;
	}

	*/


//NOT HESAPLAMA


	/*

	int puan;
	printf("Puan giriniz: "); scanf("%d",&puan);
	int sayi=puan/10 ;
	if(puan>=0 && puan<=100){

	switch(sayi){
		case 5:
			printf("Ogrencinin notu D");
			break;
		case 6:
			printf("Ogrencinin notu C");
			break;
		case 7:
			printf("Ogrencinin notu B");
			break;
		case 8:
			printf("Ogrencinin notu A");
			break;
		case 9:
			printf("Ogrencinin notu A+");
			break;
		case 10:
			printf("Ogrencinin notu A+");
			break;
		default:
			printf("Ogrencinin notu F");
			break;

		}

	}
	else{
		printf("Lutfen 0 ile 100 arasinda deger giriniz.!!!");
	}

	*/



	//GEL��M�� ATAMA OPERAT�RLER�

	//a++(post-increment) ve b--(post-decrement) => post-fix
	//++a(pre-increment) ve --b(pre-decrement) => pre-fix
	//a=a+3 >> a+=3 //�arp�m b�l�m gibi i�lemlerde de ayn� �ekilde kullan�labilir

	/*
	int i;
	int kare;
	int toplam;
	for(i=1;i<=100;i++){

		if(i%2==0){

			toplam=toplam+i;

		}



	}
	printf("toplam deger =%d",toplam-1);


	*/

	//FAKTORIYEL ALMA PROGRAMI
/*
	int a;
	int i;
	int f=1;
	printf("Faktoriyel :"); scanf("%d",&a);

	for(i=1;i<=a;i++){

		f=f*i;
		printf("\n %d! = %d",i,f);
	}
*/





	}
