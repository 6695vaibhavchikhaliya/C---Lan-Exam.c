#include<stdio.h>

void main(){
	
	if(num % 3 == 0 && num % 5 == 0){
		return 1; // true
	}else{
		return 0; // false
	}
}

int main(){
	int number;
	
	printf("Enter Of A Number :- ");
	scanf("%d",&number);
	
	if(divisibleBy3and5(number)) {
		printf("%d is Divisble by both the 3 and 5.\n",number);
	}else{
		printf("%d is Divisble by both the 3 and 5.\n",number);
	}
	return 0;
}
