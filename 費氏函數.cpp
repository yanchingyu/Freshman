#include <stdio.h> 
#include <stdlib.h> 

int f(int n) 
{ 

	if(n == 0) return 0; 
	else if(n == 1) return 1;
	else if(n >= 50) return 0; 
	else return f(n-1)+f(n-2); 
} 
int main() 
{ 
	int n; 

	printf("��J�@���n(�p��50) : "); 
	scanf("%d",&n); 
	printf("f(%d) : %d\n",n,f(n)); 

	 
	return 0; 
} 
