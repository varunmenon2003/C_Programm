#define Pi 3.14
#include <stdio.h>

int main(){
	float r, area;
	
	printf("Enter the radius of the circle\n");
	scanf(" %f", &r);
	
	area = Pi*r*r;
	
	printf("The Area of the circle is %f\n", area);
return 0;
}
