#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int x,y,z;
	printf("��J�Ĥ@�Ӿ��: ");
	scanf("%d",&x);
	printf("��J�ĤG�Ӿ��: ");
	scanf("%d",&y);
	
	while(y!=0){
		z=x%y;
		x=y;
		y=z; 
	
	}
	printf("�̤j���]��=%d\n",x);
	return 0;
}
