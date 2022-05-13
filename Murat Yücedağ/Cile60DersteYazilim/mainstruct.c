#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct kitapBilgi{
	char kitapAd[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main() {
	
	struct kitapBilgi kb = {"SekerPortakali","Vasconceulos",10,7.25};
	
	printf("Kitap Adi: %s\n",kb.kitapAd);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Puan: %.2f\n",kb.puan);
	
	return 0;
}