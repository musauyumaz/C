#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum sehirler{
	yeni,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
};

int main() {
	
	enum sehirler il;
	il=ankara;
	printf("%d",il);
	return 0;
}