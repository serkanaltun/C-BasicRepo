#include <stdio.h>
#include <math.h>
//EV CIZEN

void cati(char harf){
		printf("   %c   \n",harf);
		printf("  %c %c  \n",harf,harf);
		printf(" %c   %c \n",harf,harf);
		printf("%c%c%c%c%c%c%c\n",harf,harf,harf,harf,harf,harf,harf);
		}
void katlar(char sol, char sag, char zemin){

		printf("%c     %c\n",sol,sag);
		printf("%c     %c\n",sol,sag);
		printf("%c     %c\n",sol,sag);
		printf("%c%c%c%c%c%c%c\n",zemin,zemin,zemin,zemin,zemin,zemin,zemin);
}

int main(){


	int i,d;
	printf("Kac katli ev cizeyim: "); scanf("%d",&d);


	cati('y');
	for (i=0;i<d;i++){
		katlar('s','a','n');
	}
}




//TEK CIFT
/*
int tekcift(int a){
	if(a%2==0)
		return 0;
	else if(a%2==1)
		return 1;
	<
}

int main(){

int a,sonuc;
printf("Sayi giriniz: "); scanf("%d",&a);
sonuc=tekcift(a);

	if(sonuc==0)
		printf("Girdiginiz Sayi Cift");
	else if(sonuc==1)
		printf("Girdiginiz Sayi Tek");
	else
		printf("Girdiginiz Sayi Tanimsiz");
}
*/



//GLOBAL DEGISKEN
/*
int sonuc=0;
void kare(int a){
	sonuc=a*a;
	printf("kare:%d\n",sonuc);
}
void kup(int a){
	sonuc=a*a*a;
	printf("kup:%d\n",sonuc);
}
int main(){
	int a;
	printf("Sayi giriniz: "); scanf("%d",&a);
	kare(a);
	kup(a);
	printf("Sonuc: %d",sonuc);
}
*/




//OBEB - OKEK
/*
void obeb(int a, int b){
	int bolen=2, carpim=1;
	while(a>1 || b>1){

		if(a%bolen==0 && b%bolen==0){
		carpim=carpim*bolen;
		a=a/bolen;
		b=b/bolen;
		}
		else if(a%bolen==0){
			carpim=carpim*bolen;
		a=a/bolen;
		}
		else if(b%bolen==0){
			carpim=carpim*bolen;
		b=b/bolen;
		}
		else{
		bolen++;
		}
	}
	printf("OKEK: %d",carpim);
}
int main(){
	int a, b;
	printf("Sayi girin: "); scanf("%d",&a);
	printf("Sayi 2 girin: "); scanf("%d",&b);
	obeb(a,b);

}
*/




//ASAL SAYI BULMA
/*
int asal(int a){
	int kok=sqrt(a), i;
	for(i=2;i<=kok;i++){
		if(i%2==0 && i>2){
			continue;
		}
		if(a%i==0){
			printf("Asal Degil");
			return 0;
		}
	}
	if(i>=kok){
		printf("Asal Sayi");
		return 1;
	}
}
int main(){
	int a,sonuc;
	printf("Sayi giriniz: "); scanf("%d",&a);
	sonuc=asal(a);
}
*/
