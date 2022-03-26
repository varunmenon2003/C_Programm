#include <stdio.h>

int btod(int bin);

int main(){
	int decimal;
	int binary;
	
	printf("Enter a binary Number:\n");
	scanf("%d", &binary);
	
	decimal = btod(binary);
	
	printf("The Decimal of the binay number is %d\n", decimal);	
return 0;
}

int btod(int bin){
	if(bin == 0){
		return 0;
	}
	else{
		return bin%10 + btod((bin /10)*2);
	}
}
