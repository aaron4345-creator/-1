#include <stdio.h>
void increase(int d[],int len);

void printf_shuzu(int a[]){
	int i=0;
	for(i=0;i<4;i++){
		printf("%d",a[i]);
	}
}
int main()
{
	int arr[4]={8,3,1,};
    increase(arr,4);
    printf_shuzu(arr);	
return 0;	
}
void increase(int d[],int len)
{
	int j;
	int i;
	int a;
	int e;
	printf("请输入想要添加的位置："); 
	scanf("%d",&a);
	printf("\n");
	printf("输入您想增加的数：");
	scanf("%d",&e);
    printf("\n"); 
    for(i=0;i<len-1;i++){
    	if(a-1==i)
    	{
    		for(j=len-1;j>=a;j--){
    			d[j]=d[j-1];
			}
			d[i]=e;
		}
	}
}
