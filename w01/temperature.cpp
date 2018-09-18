#include <stdio.h>

int main(){
    float x ,y;
	printf("Enter temperature in C: ");
	scanf("%f",&x);
	y=x*9/5+32;
	printf("%.1f C = %.1f F\n", x ,y);
	

    float A ,B;
	printf("Enter temperature in F: ");
	scanf("%f",&A);
	B=(A-32)*5/9;
	printf("%.1f C = %.1f F\n", A ,B);
	
}




