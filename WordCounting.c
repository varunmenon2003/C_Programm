#include <stdio.h>
#include <string.h>

int main(){
	char sentence[50];
	int i, wordcount = 0;
	
	printf("Enter a sentence:\n");
	fgets(sentence, 50, stdin);
	//printf("%d\n\n", (int)strlen(sentence));
	
	for(i=0;i<strlen(sentence);i++){
		if(sentence[i] == ' ' || i == strlen(sentence)-1){
			if(strlen(sentence) == 1 && strlen(sentence) < 2){	
				wordcount = 0;
			}
			else{
				wordcount++;
			}
		}
	}
	
	printf("\n\nNo. of words: %d\n\n", wordcount);
return 0;
}
