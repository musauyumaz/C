#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char kitap[40];
	printf("Ad :");
	scanf("%s",&kitap);
	
	printf("%s\n",kitap);
	
	
	printf("%18s\n",kitap);
		
		
	printf("%20.5s\n",kitap);
	
	
		printf("%-20s",kitap);
	return 0;
}