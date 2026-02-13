#include<stdio.h>

int main() {
	
	char character;
	
	printf("Please enter a character:");
	scanf(" %c",&character);
	
	if(character>='A' && character<='Z'){
		printf("%c is an uppercase letter.\n",character);
	}
	else if(character>='a' && character<='z'){
		printf("%c is a lowercase letter.\n",character);
	}
	else{
		printf("%c is not a letter.\n",character);
	}
	
	return 0;
}
