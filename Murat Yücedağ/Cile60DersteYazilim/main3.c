#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	int sayi1=20,
//	sayi2=5,
//	toplam=sayi1+sayi2,
//	fark=sayi1-sayi2,
//	bol=sayi1/sayi2,
//	carp=sayi1*sayi2;
//	
//	printf("Toplam : %d \n",toplam);
//	printf("Fark : %d \n",fark);
//	printf("Carpim : %d \n",carp);
//	printf("Bolum : %d \n",bol);

//int s1=10,s2=6,islem=s1/s2;
//printf("Sonuc : %d\n",islem);

//Karenin Alan Ve Çevreasi

//int kenar=10,alan=kenar*kenar,cevre=kenar*4;
//
//printf("Alan : %d\n",alan);
//printf("Cevre : %d\n",cevre);

int bagajGirilen=25,elGirilen=10,toplam=0,bagaj,el,odenecekTutar;
bagaj=bagajGirilen-15;
el=elGirilen-8;
toplam=bagaj+el;
odenecekTutar=toplam*5;
printf("Toplam Odenecek Miktar = %d₺",odenecekTutar);
	
	return 0;
}