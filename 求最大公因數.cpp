#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int x,y,z;
	printf("輸入第一個整數: ");
	scanf("%d",&x);
	printf("輸入第二個整數: ");
	scanf("%d",&y);
	
	while(y!=0){
		z=x%y;
		x=y;
		y=z; 
	
	}
	printf("最大公因數=%d\n",x);
	return 0;
}
