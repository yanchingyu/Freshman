#include<stdio.h>

int main()
{
	int n,m,i,k;
	float x,y,sum;
	scanf("%d",&n);
	scanf("%d",&m);
	
	if(n!=5,m!=6){
		for(i=1;i<=n;i++){
			x=x+1.0/i;
	}
		printf("x= %f\n",x);
		for(k=1;k<=m;k++){
			y=y+1.0/k;
	}
		printf("y= %f",y);
	}
	else{
		for(i=1;i<=n;i++){
			x=x+1.0/i;
		}
		printf("x= %f\n",x);
		for(k=1;k<=m;k++){
			y=y+1.0/k;
		}
		printf("y= %f\n",y);
		sum=y-x;
		printf("sum= %f",sum);
	}
	return 0;
 } 
