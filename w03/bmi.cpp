#include<stdio.h>

int main(){
	float A,B,C;
	printf("身高(cm): ");
	scanf("%f",&A);
	printf("體重(kg): ");
	scanf("%f",&B);
	C=B/(A*A/10000);
	printf("你的BMI:%f \n",C);
	
	if (C<18.5) { printf("體重過輕\n");	}
	else if(C>=18.5 && C<24) {printf("正常範圍\n");	}
	else if(C>=24 && C<27) {printf("過重\n");	}
	else if(C>=27 && C<30) {printf("輕度肥胖\n");	}
	else if(C>=30 && C<35) {printf("中度肥胖\n");	}
	else if(C>=35) {printf("重度肥胖\n");	}
    else{ printf("您輸入不合理數字\n") ;} 
	
}
