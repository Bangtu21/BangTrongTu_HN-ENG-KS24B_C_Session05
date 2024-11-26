#include <stdio.h>
int main(){
	int num;
	printf("moi ban nhap so nguyen bat ki");
	scanf("%d",&num);
	while(num>0){
		int charactor=10%num;
		printf("%d ki tu \n", charactor);
		num=num/10;
	}
}
