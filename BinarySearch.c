#include <stdio.h>

int main(){
	//printf("1\n");
	int n, a[20], i, j, temp;
	int f, l, mid, key;
	//printf("2\n");
	printf("How many element do you want?\n");
	scanf(" %d", &n);
	//printf("3\n");
	printf("Enter %d element for ur array.\n", n);
	for(i=0;i<n;i++){
		scanf(" %d", &a[i]);
	}
	
	for(i=0;i<n;i++){
		//printf("b\n");
		for(j=i+1;j<n;j++){
			//printf("a\n");
			if(a[i] > a[j]){
				//printf("c\n");
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++){
		printf(" %d \t",a[i]);
	}
	printf("\n\n");
	
	printf("Enter the number you want to search:");
	scanf(" %d", &key);
	
	f = 0;
	l = n-1;
	
	while(f<=l){
		mid = (f + l)/2;
		if(key==a[mid]){
			printf("Element %d is found at location %d\n", key, mid+1);
			return -1;
		}
		else if(key>a[mid]){
			f = mid + 1;
		}
		else if(key<a[mid]){
			l = mid - 1;
		}
		printf("Number not found in the array.\n");
		return 0;			
	}
}
