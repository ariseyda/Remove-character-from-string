#include<stdio.h>
#include<string.h>
#define size 30

//A computer program receives a word and an unsigned integer less than length of the entered word. 
//If unsigned integer does not meet the condition, reentry for the unsigned integer is requested until condition is met. 
//Character at the entered integer is removed from the entered word and saved in another string. 
//Saved string is displayed.

int main(){
	
	char word[size];
	
	printf("Enter a word:");
	scanf("%s",word);
	
	int l=strlen(word);
	
	unsigned int n;
	printf("Please enter an integer(less than length of the entered word):");
	scanf("%u",&n);
	
	while(n>l){
		scanf("%u",&n);
	}
	
	int i;//Remove the character
	for(i=n-1;i<l;i++){
		word[i]=word[i+1];
	}
	char removed=word[n-1];
	printf("%c",removed);
	printf("\n%s",word);
	return 0;
}



