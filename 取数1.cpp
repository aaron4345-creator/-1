#include <stdio.h>
int main()
{
int a;
int b;
int c;
int d;
int e;
printf("请输入一个小于128的数：");
scanf("%d",&a);
while(a>0){
	b=a%2;
	a/=2;
	c++;
	if(b>0){
		printf("1");
	}
	else{
		printf("0");
	}
}
if(c<8){
	e=8-c;
	while(e>0){
		e--;
		printf("0");
	}
}
return 0;
}
