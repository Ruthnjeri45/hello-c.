//variables and data type 

#include<stdio.h>

int main(){
	//declare and initialize variables
	char grade='A';//%C
	char name[15]=("Ruth");//%s
	int age=18;//%d
	float marks=70;//%f
	double pi=3.142;//%lf
	
	printf("Enter your grade\t");
	scanf("%c",&grade);
	
	printf("Enter your name\t");
	scanf("%s",&name);
	
	printf("Enter your age\t");
	scanf("%d",&age);
	
	printf("Enter your marks\t");
	scanf("%f",&marks);
	
	printf("Enter pi\t");
	scanf("%lf",&pi);
	
	
	return 0;
}