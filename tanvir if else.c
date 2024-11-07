#include <stdio.h>

int main()
{
	float area, radius, width, length, a, b, c,s;
	int choice;
	
	printf("Choose an Option to compute:\n ");
	printf("1: Area of the Circle\n ");
	printf("2: Area of the Rectangle\n ");
	printf("3: Area of the Triangle\n ");
	scanf("%d", &choice);
	
	if(choice==1)
		
	{
		printf("Enter the radius of the Circle: ");
		scanf("%f", &radius);
		area = 3.1416*radius*radius;
		printf("The area of the circle with radius %f is:", radius, area);
	}
	
	if(choice ==2)
	{
		
		printf("Enter the Width of the rectangle: ");
		scanf("%f", &width);
		printf("Enter the length of the rectangle: ");
		scanf("%f", &length);
		area = width*length;
		printf("The area of the rectangle is:%f", area);
	}
	
	if(choice ==3)
	{
		printf("Enter the 3 sides of triangle):  ");
		scanf("%f %f %f", &a, &b, &c);
		s = (a+b+c)/2;
		area =(s*(s-a)*(s-b)*(s-c));
		printf("The area of the triangle is:%f", area);
	}
	
    return 0;
}
