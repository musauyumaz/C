#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char kelime[100];
	printf("Kelimeyi Girin: ");
	scanf("%s",&kelime);
	printf("Katar Uzunlugu %d\n",strlen(kelime));
	printf("Katar Uzunlugu %d",strlen("merhaba dunya"));
	
	return 0;
}