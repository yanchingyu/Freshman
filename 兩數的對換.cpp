#include <stdio.h>
 
int main(void) {
    int a, b, temp;
    int p1, p2;
    printf("�п�J a ���ȡG"); 
    scanf("%d", &a);
    printf("�п�J b ���ȡG");
    scanf("%d", &b);
 
    p1 = a;
    p2 = b;
 
    if(p1 < p2){
      temp = p1;
      p1 = p2;
      p2 = temp;
    }
    printf("p1���ȡG%d\n", p1);
    printf("p2���ȡG%d\n", p2);
}
