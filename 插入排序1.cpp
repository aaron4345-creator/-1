#include <stdio.h>
void printf_shuzu(int a[],int len){
	int i=0;
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
}
void insertion_sort(int a[],int len)
{
	int i=0;
    int j=0;
	for(i=1;i<len;i++){
		int key=a[i];
	    j=i-1;
		while(key<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
//void scanf_shuzu(int* len,int arr[])
//{
//	int i;
//	printf("请输入数组长度；");
//	scanf("%d",len);
//	printf("请依次输入数字：");
//	for(i=0;i<*len-1;i++) {
//		scanf("%d",&arr[i]);
//	}
//}
int main()
{
	int a[]={4,2,1,8};
    insertion_sort(a,4);
	printf_shuzu(a,4);
	return 0;
}

