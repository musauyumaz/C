#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int KupBul(int sayi){
	int sonuc = sayi *sayi *sayi;
	return sonuc;
}
void dortgen(int kenar1,int kenar2){
	for(int i=0;i<kenar1;i++){
		for(int j=0;j<kenar2;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main() {
//	int sayi;
//	printf("Sayiyi Girin : ");
//	scanf("%d",&sayi);
//	printf("Sonuc : %d",KupBul(sayi));
	dortgen(10,4);
	return 0;
}