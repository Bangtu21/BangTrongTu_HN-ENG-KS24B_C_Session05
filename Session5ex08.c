#include <stdio.h>
int main(){
	int num1, num2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&num2);
	int max=num1<num2?num1:num2;
	for(int i=max; i>=1; i++){
		if((i%num1==0)&&(i%num2==0)){
			printf("Boi chung nho nhat la %d", i);
			break;
		}
	}
	return 0;
}
