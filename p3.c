#include<stdio.h>

void main()
{
	int i , j , s;
	
	for(i=10;i>=6;i--){
		for(s=6;s<i;s++){
			printf("  ");
		}
		for(j=10;j>=i;j--){
			printf("%d",i);
		}
		printf("\n");
	}
}
