#include <stdio.h>
void printf_shuzu(int a[]){
	int i=0;
	for(i=0;i<8;i++){
		printf(" %d",a[i]);
	}
}
//void zuhe_shuzu(int len,int len1,int len2,int arr_1[],int arr_2[],int arr[],int i,int a,int b)
//{
//		len=len1+len2;
//		  for(a=0;a<len1-1;a++){
//			  arr[i]=arr_1[a];
//			  i++;
//			  }	    
//		 for(b=0;b<len2-1;b++){
//			i=-1;
//			arr[4+i++]=arr_2[b];	
//      }
//
//}

int main()
{
	int len1=4;
	int len2=4;
	int arr_1[len1]={8,3,1,9};
	int arr_2[len2]={1,2,3,4};
	int i=0;
	int a;
	int b;
	int len;
	int arr[len];
//	zuhe_shuzu(len,len1,len2,arr_1,arr_2,arr,i,a,b);
    		len=len1+len2;
		  for(a=0;a<len1-1;a++){
			  arr[i]=arr_1[a];
			  i++;
			  }	    
		 for(b=0;b<len2-1;b++){
			i=-1;
			arr[4+i++]=arr_2[b];	
      }
	printf_shuzu(arr);
	return 0;
}

