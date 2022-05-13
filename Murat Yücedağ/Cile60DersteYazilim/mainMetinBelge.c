#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *dosya;
	dosya=fopen("C:\\Users\\musau\\Desktop\\deneme.txt","w");
	
	putc('a',dosya);
	
	fclose(dosya);
	return 0;
}