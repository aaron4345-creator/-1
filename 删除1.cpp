#include <stdio.h>
void increase(int d[],int len);

void printf_shuzu(int a[]){
	int i=0;
	for(i=0;i<3;i++){
		printf("%d",a[i]);
	}
}
int main()
{
	int len=4;
	int arr[len]={8,3,1,9};
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
	printf("请输入想要删除的位置："); 
	scanf("%d",&a);
	printf("\n");
    for(i=0;i<len-1;i++){
    	if(a-1==i)
    	{
    		
    		for(j=a-1;j<=len-1;j++){
    			d[j]=d[j+1];
			}
        } 
		else if(a-1==3) {
			d[4]=0;
		}     
		d[4]=0;
}
}
