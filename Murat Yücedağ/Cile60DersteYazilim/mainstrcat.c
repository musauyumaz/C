#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("kitap Adi ve Yazari Girin :");
	scanf("%s%s",kitapad,yazar);
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	printf("\n\n"); 
	printf("%s",kitapyazar); 
	return 0;
}