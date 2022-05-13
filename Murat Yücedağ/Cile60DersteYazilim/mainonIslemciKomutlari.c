#include <stdio.h>
#include <stdlib.h>
#define puan 2.25
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float Turkce;
	printf("Turkce Netiniz : ");
	scanf("%f",&Turkce);
	
	float sozelPuan;
	sozelPuan = Turkce*puan+50.25;
	printf("Sozel Puaniniz : %5.2f",sozelPuan);
	return 0;
}