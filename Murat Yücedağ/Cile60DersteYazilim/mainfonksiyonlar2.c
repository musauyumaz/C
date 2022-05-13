#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int topla(int s1,int s2){
	int sonuc = s1+ s2;
	return sonuc;
}

int main() {
	printf("%d",topla(15,25));
	return 0;
}