#include<stdio.h>
#include<math.h>

int main() {
	
	int number,squareRoot;
		
	printf("Enter a number:");
	scanf("%d",&number);
	
	if(number<0){
		printf("Negative numbers do not have a real square root.");
		return 0;
	}
	
	squareRoot=(int)sqrt(number);
	
	if(squareRoot*squareRoot == number){
		printf("Square root of %d is an integer.",number);
	}
	else{
		printf("Square root of %d is not an integer.",number);
	}
	
	return 0;
}
