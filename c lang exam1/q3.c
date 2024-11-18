#include<stdio.h>
int main(){
	float angle1,angle2,angle3;
	printf("Enter first angle degree:=");
	scanf("%f",&angle1);
		printf("Enter second angle degree:=");
	scanf("%f",&angle2);
	angle3= 180-(angle1+angle2);
  printf("The third angle of the triangle is: %.2f degrees\n", angle3);
  printf("-----------------*----------*");
}