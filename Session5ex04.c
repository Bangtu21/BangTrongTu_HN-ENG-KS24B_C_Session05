#include <stdio.h>
int main(){
	int number;
	printf("Ban hay nhap mot so tu 1 den 10: ");
	scanf("%d",&number);
	printf("Bang cua chuong cua %d la: \n", number);
	for(int i=1; i<=10; i++){
		printf("%d x %d = %d\n", number, i, number*i );
	}
	
}
