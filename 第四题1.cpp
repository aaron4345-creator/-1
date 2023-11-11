#include <stdio.h>
int main()
{
	int nums[4]={1,2,3,4};
	int target=6;
	int i=0;
	int j=0;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			if(nums[i]+nums[j]==6){
				printf(" %d %d",i,j);
				break;
			}
		}	
	}
  return 0;	
}
