#include <stdio.h>
int main()
{
int i=0;
int j=0;
int a=1;
int b=0;
scanf("%d",&i);
scanf("%d",&j);
for(a=1;a<=i;a++){
	if(i/a*a==i){
		if(j/a*a==j){
		b=a;
		}
			   	
	}
}
printf("%d",b);
return 0;
}
