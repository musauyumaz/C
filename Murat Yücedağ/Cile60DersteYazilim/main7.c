#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sayi=1096;
	float binler,yuzler,onlar,birler;
	
	binler =sayi/1000;//1
	printf("%d \n",binler);
	
	
	yuzler =yuzler % 1000;//096
	yuzler=yuzler/100;//0.96
	printf("%d \n",yuzler);
	
	onlar=sayi%100;//96
	onlar =onlar/10;//9.6
	printf("%d \n",onlar);
	
	birler =sayi%10;
	printf("%d",birler);
	
	
//	int asalMi =1;
//	int sayi;
//	printf("Sayiyi Girin: ");
//	scanf("%d",&sayi);
//	
//	for(int i=2;i<sayi;i++)
//	{
//		if(sayi%i==0){
//			printf("Asal Değildir");
//		}
//	}
//	
	
//	if(asalMi==0){
//		printf("Asal degildir");
//	}else{
//	printf("Asaldir");
//	}

	
	
	
	return 0;
}