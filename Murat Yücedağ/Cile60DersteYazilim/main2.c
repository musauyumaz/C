#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	char kitapAd[30];
//	printf("Kitabin Adini Giriniz : ");
//	scanf("%s",kitapAd);
//	printf("Girmis Oldugunuz Kitap : %s",kitapAd);

char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[10];
	printf("Adiniz : ");
	scanf("%s",Ad);
	
	printf("Soyadiniz : ");
	scanf("%s",Soyad);
	
	printf("Yasiniz : ");
	scanf("%s",Yas);
	
	printf("Sehir : ");
	scanf("%s",Sehir);
	
	printf("Meslek : ");
	scanf("%s",Meslek);
	
	printf("\n");
	return 0;
}