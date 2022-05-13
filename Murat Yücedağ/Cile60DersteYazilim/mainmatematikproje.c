#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("***************");
	printf("\n");
	printf("\n");
	printf("**   Menu    **");
	printf("\n\n");
	printf("1-)Toplama Islemi\n");
	printf("2-)Carpma Islemi\n");
	printf("3-)Kare Bul\n");
	printf("4-)Küp Bul\n");
	printf("4-)Denklem (5x^2+4x+3)\n");
	
	int s1,s2,sonuc,secim;
	printf("\n\n");
	printf("islem secin: ");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("iki sayi girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplam: %d",sonuc);
			break;
		case 2:
			printf("iki sayi girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpim: %d",sonuc);
			break;
		case 3:
			printf("bir sayi girin: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Karesi: %d",sonuc);
			break;
		case 4:
			printf("bir sayi girin: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Kupu: %d",sonuc);
			break;
		case 5:
			printf("bir sayi girin: ");
			scanf("%d",&s1);
			sonuc=((s1*s1*5))+(4*s1)+3;
			printf("Denklem Sonucu: %d",sonuc);
			break;
		
		default:
			printf("Lutfen Dogru Islem Secin");
			break;
	}
	
}