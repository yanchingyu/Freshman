#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,y;
	int count=0;
	
	srand (time(NULL));

{
	x=rand()%9000+1000;
}
	
	while(1){
		printf("請猜一個數字: ");
		scanf("%d",&y);
		count++;
		if(x==y){
		
		printf("smart kid !");
		return 0;
		}	
		if(count>10){
		printf("idiot !");
		return 0;
		}
		else{
		if(x>y){
			printf("bigger !\n");
		}
			else{
				printf("smaller !\n");
			}
		}
	}
}
