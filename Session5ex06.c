#include <stdio.h>
int main(){
	int answer;
	float num1, num2;
	while(1){
		printf("\nNhap so thu nhat: ");
		scanf("%f",&num1);
		printf("Nhap so thu hai: ");
		scanf("%f",&num2);
		printf("CALCULATOR\n");
		printf("1. Tong 2 so\n2. Hieu 2 so\n3. Tich 2 so\n4. Thuong 2 so\n5. Thoat\n");	
		printf("Lua chon cua ban: ");
		scanf("%d", &answer);
		if(1<=answer && answer<=5){
			switch(answer){
				case 1:
					printf("Tong hai so %.2f va %.2f la %.2f\n", num1, num2, num1+num2);
					break;
				case 2:
					printf("Hieu hai so %.2f va %.2f la %.2f\n", num1, num2, num1-num2);
					break;
				case 3:
					printf("Tich hai so %.2f va %.2f la %.2f\n", num1, num2, num1*num2);
					break;
				case 4:
					if(num2!=0){
						printf("Thuong hai so %.2f va %.2f la %.2f\n", num1, num2, (float)num1/num2);
					}else{
						printf("Khong the tinh toan");
					}
					break;
				case 5:
					printf("Thoat chuong trinh");
					return 0;
			}
		}
	}
}
