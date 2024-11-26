#include <stdio.h>
int main(){
	int num1, num2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&num2);
	int min=num1<num2?num1:num2;
	for(int i=min; i>=1; i--){
		if((num1%i==0)&&(num2%i==0)){
			printf("Uoc chung lon nhat la %d", i);
			break;
		}
	}
	return 0;
}
