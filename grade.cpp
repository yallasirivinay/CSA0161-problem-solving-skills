#include <stdio.h>
int main(){
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks<0||marks>100){
		printf("wrong entry");
	}
	else if(marks>90&& marks<=100){
		printf("A grade");
	}
	else if(marks>80&& marks<=90){
		printf("B grade");
	}
	else if(marks>70&& marks<=80){
		printf("C grade");
	}
	else if(marks>60&& marks<=70){
		printf("D grade");
	}
	else if(marks>50&& marks<=60){
		printf("E grade");
	}
	else if(marks<50){
		printf("FAIL");
	}
	else{
		printf("data invalid");
	}
	return 0;
}
