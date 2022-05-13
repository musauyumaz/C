#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct kayit{
	char ad[20];
	 no;
	int sinif;
	float ort;
};
struct kayit ogrenci;
int main() {
	
	printf("Ad Soyad :");
	scanf("%s",&ogrenci.ad);
	printf("Numara :");
	scanf("%d",&ogrenci.no);
	printf("Sinif :");
	scanf("%d",&ogrenci.sinif);
	printf("Ortalamasi :");
	scanf("%f\n",&ogrenci.ort);
	
	
	printf("************Ogrenci Bigileri*********\n");
	printf("Ad Soyad :%s\n",ogrenci.ad);
	printf("Numarasi :%d\n",ogrenci.no);  
	printf("Sinifi :%d\n",ogrenci.sinif);
	printf("Ortalamasi :%.2f\n",ogrenci.ort);
	
	return 0;
}