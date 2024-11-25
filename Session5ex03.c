#include <stdio.h>
int main(){
	int number, sum;
	printf("Hay nhap mot so nguyen duong ");
	scanf("%d",&number);
	for(int i=1; i<=number; i++){
		sum += i;
	}
	printf("Tong cac so tu 1 den %d la %d", number, sum);
}
