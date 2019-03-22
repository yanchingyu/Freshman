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

	printf("輸入一整數n(小於50) : "); 
	scanf("%d",&n); 
	printf("f(%d) : %d\n",n,f(n)); 

	 
	return 0; 
} 
