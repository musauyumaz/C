#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,toplam,fark,carpim;
	printf("Birinci Sayiyi Girin: \n");
	scanf("%d",&sayi1);
	printf("Ikinci Sayiyi Girin: \n");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	printf("Toplam : %d\n",toplam);
	printf("Fark : %d\n",fark);
	printf("Carpim : %d\n",carpim);
	
	return 0;
}