#include <stdio.h>
int main()
{
	int x=0;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			if(b>c)	{
				x=a*100+b*10+c;
			}
			else{
				x=a*100+c*10+b;
			}
				
		}
		else{
			x=c*100+a*10+b;
		}
	}
	else{
		if(c<a){
			x=b*100+a*10+c;
		}else{
			if(c<b){
				x=b*100+c*10+a;
			}
			else{
				x=c*100+b*10+a;
			}
	         }
		}
		printf("%d",x);
return 0;
	}

