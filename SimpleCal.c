#include <stdio.h>

int main(){
	int  a, b, c;
	char op;
	
	printf("Enter 2 Number:\n");
	scanf(" %d %d", &a, &b);
	printf("Enter choice:\n1) '+' for addition\n2) '-' for subtraction \n3) '*' for multiplication\n4) '/' for division\n5) '%%' for Modulus\n");
	scanf(" %c", &op);
	
	if(op == '+'){
		c = a + b;
		printf("Output is %d\n",c);
		return 1;
	}
	else if(op == '-'){
		c = a - b;
		printf("Output is %d\n",c);
		return 1;
	}
	else if(op == '*'){
		c = a * b;
		printf("Output is %d\n",c);
		return 1;
	}
	else if(op == '/'){
		if(b == 0){
			printf("Error\n Enter a non-zero number.");
		}
		else{
			c = a / b;
			printf("Output is %d\n",c);
		}
		return 1;
	}
	else if(op == '%'){
		if(b == 0){
			printf("Error\n Enter a non-zero number.");
		}
		else{
			c = a % b;
			printf("Output is %d\n",c);
		}
		return 1;
	}
	else{
		printf("Wrong choice\nPlease Try again.\n");
	}
	//printf("Output is %d\n",c);

return 0;
}
