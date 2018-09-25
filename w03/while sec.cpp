#include <stdio.h>

int main(){
	int hh,mm,ss;
	int sec;
	printf("Enter seconds: ");
	scanf("%d",&sec);
	while(sec>=0){
		hh =sec/3600;
	    mm =(sec%3600)/60;
	    ss =sec%60;
	printf("%d seconds =%02d : %02d : %02d \n",sec ,hh ,mm ,ss);
	printf("Enter seconds: ");
	scanf("%d",&sec);
	}
	
	
}
