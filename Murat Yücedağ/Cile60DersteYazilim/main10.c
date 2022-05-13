#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

          

void Havalimani(){
	
			int elKg,bagajKg,elOdenecek,bagajOdenecek,toplam;
	
	printf("Ele Alinan kilo : ");
	scanf("%d",&elKg);
	printf("Bagaj Toplam kilo : ");
	scanf("%d",&bagajKg);
	

	
	 elOdenecek=(elKg-8)*4;
	 bagajOdenecek=(bagajKg-15)*5;
	
 	 toplam= elOdenecek + bagajOdenecek;
 	
 		if(elKg <=8){
		elOdenecek=0;
	
	}
	else if(bagajKg<=15){
		bagajOdenecek=0;
	}
 	
 	printf("%d Kg El icin odenecek Tutar : %d TL\n",elKg,elOdenecek);
 	printf("%d Kg bagaj icin odenecek Tutar : %d TL\n",bagajKg,bagajOdenecek);
 	printf("Toplam odenecek Tutar : %d\n TL",toplam);
	
	printf("Ele Alinan kilo : ");
for(int i=0;i<10;i++){
		switch(maclar[i]){
		
			case 0: 
				
			break;
			
			case 1:
				puan+=1;
				break;
			case 2:
				puan+=3;
				break;
			
		}
	}
	printf("%d",puan);
}
void DiziToplam(int sayi){
	int toplam=0;
	for(int i =1;i<=sayi;i+=4){
		toplam+=i;
	}
	printf("%d",toplam);
}
void DikUcgen(){
		int taban;
	printf("Taban Sayisini Girin : ");
	scanf("%d",&taban);
	
	for(int i=0; i<=taban;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

void Otopark(){
	 int saat,toplam=0;
	 	printf("Kac Saat Kaldiniz Girin :");
		scanf("%d",&saat);
		
		if(saat>=0&&saat<=4){
			printf("10 TL Odeme Yapiniz");
		}
		else if(saat>=5&&saat<=8){
			printf("12 TL Odeme Yapiniz");
		}
		else if(saat>=9&&saat<=12){
			printf("15 TL Odeme Yapiniz");
			}
		else if(saat>=13){
			printf("20 TL Odeme Yapiniz");
		}
}
void SifirGirileneKadarSayilariTopla(){
	 int sayi,toplam=0;
	 
	while(sayi!=0){
		printf("Sayiyi Girin :");
		scanf("%d",&sayi);
		
		toplam +=sayi;
		}
printf("Toplamlari : %d",toplam);
}

void SayiToplamlari(){
	int toplam,sayi;
	for(int i=0;i<4;i++){
	printf("Sayiyi Girin :");
	scanf("%d",&sayi);
	toplam+=sayi;
	}
printf("Toplam : %d",toplam);   
}



void BakteriSayisiBulma(int saat){
		int bakteriSayisi=1;
	for(int j=1;j<=saat;j++){
		bakteriSayisi = bakteriSayisi*2;
	}
	printf("%d ",bakteriSayisi);

}

void KupBulma(int sayi){
	printf("Sayiyi Girin :");
	int sonuc;
	scanf("%d",&sayi);
	
	sonuc =sayi*sayi*sayi;
	printf("%d sayisinin kupu %d",sayi,sonuc);
	
}
void TamBolenler(int sayi){
	for(int i=100;i<=999;i++){
	BirbirindenFarkli(i);
	printf("\n");	

	printf("***Sayinin Tam Bolenleri***\n");
	for(int i=1;i<=sayi;i++){
		if(sayi%i==0){
			printf("%d ",i);
	}
	
	}}
}
void BirbirindenFarkli(int sayi){
	int yuzler,onlar,birler;
	
//	printf("Sayiyi Girin :");
//	scanf("%d",&sayi);
	yuzler=sayi/100;
	onlar =sayi %100;
	onlar =onlar/10;
	
	birler=sayi%10;
	
	
	if(yuzler == onlar || yuzler==birler || onlar ==birler){
		printf("Sayi Rakamlari Birbirinden Farkli Degil : %d",sayi);
		
	}else{
			printf("Sayi Rakamlari Birbirinden Farkli : %d",sayi);
	}
}