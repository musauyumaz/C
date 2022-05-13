#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	//Sayıyı ekrana yazdırma
	printf("Deger : %d\n",sayi);
	
	//Adresi ekrana yazdırma
	printf("Adres : %x\n",s);
	
	
	char harf ='a';
	char *h=&harf;
	
	//harfi Ekrana Yazdıorma
	printf("harf : %c\n",harf);
	
	//adresi ekrana yazdırma
	printf("Adres : %x",h);
	return 0;
}