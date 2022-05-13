#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char harf ='k';
	char *pt =&harf; 

	printf("Adresi : %x\n",pt);//65fe17
	pt++;
	printf("Adresi2 : %x\n",pt);//65fe18
	
	pt--;
	printf("Adresi3 : %x\n",pt);//65fe17
	
	pt+=5;
	printf("Adresi4 : %x",pt);
	return 0;
}