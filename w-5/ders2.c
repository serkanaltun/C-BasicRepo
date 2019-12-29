#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*#define PI 3.14 // maske kodlar� kullan�m�
#define yazdir printf
#define oku scanf
*/
int main(){
	/*int yaricap=3;
	printf("yaricap giriniz=");
	oku("%d",&yaricap);
	#undef PI// değişkeni etkisiz hale getiren kod
	//float PI=3.14;

	#ifndef PI
	     #define PI 3.14
    #endif

	#ifdef PI

	float alan=PI*yaricap*yaricap;
	yazdir("alan=%f",alan);

	#else

	printf("HATA : PI tanimsiz");

	#endif
	*/
/*
	int a;

	int i;
	for(i=1; i<10; i++){

		    a=rand()%100;// 1 ile 100 aras�nda random say�lar yazd�rmak
			printf("a=%d\n",a);
	}
*/

	/*
		int a;

	int i;
	for(i=1; i<10; i++){

		    a=5+rand()%100;// 5 ile 105 aras�nda random say�lar yazd�rmak
			printf("a=%d\n",a);
	}
	*/
/*
	int a;
	int i;
	srand(time(0));
	for(i=1; i<10; i++){
		    a=rand()%10;
		    float b=(float)a/10;// sayıları 0 la 1 arasına s�k��t�rma kodu
			printf("a=%.1f\n",b);
	}
*/

	/*
	srand(time(0));// �u anki zaman� okuyor
	int a;
	int i;
	for(i=1; i<10; i++){

		    a=5+rand()%100;
		    float b=(float)a/100;// 5 ile 105 aras�ndakileri 100 e b�l�p yazd�ran kod
			printf("a=%.2f\n",b);
	}
	*/
	/*
	srand(time(0));// farkl� say�lar� getiriyor her seferinde
	int a;
	int i;
	for(i=1; i<10; i++){

		    a=rand()%100;
			printf("a=%d\n",a);
	}
*/
/*
	srand(time(NULL));
	int a, sayac=0;
	int i;
	for(i=1; i<1000; i++){

		    a=1+rand()%6;
		    if(a==4){
		    	sayac++;
			}

}
     printf("sayac=%d \n",sayac);// zar atıldığında kaç kez 4 geldiğini söyleyen program
*/
/*
	srand(time(NULL));
	int a, sayac=0;
	int x=567;
	while(1){

		    a=100+rand()%900;
		    sayac++;
		    if(a==x){
		    	break;
			}

}
     printf("sayac=%d \n",sayac);// ka� denemede istedi�imiz say�y� bulma kodu
*/
}
