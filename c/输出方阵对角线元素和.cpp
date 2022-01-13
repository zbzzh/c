#include <stdio.h>
int main(){
	int digit,i,j,cnt=0,sum=0;
	scanf("%d",&digit);
	int arr[digit][digit];
	for(i=0;i<digit;i++){
		for(j=0;j<digit;j++){
			scanf("%d",&arr[i][j]); 
		}
	}
	for(i=0;i<digit;i++){
		sum+=arr[i][i];
		if(arr[i][i]==0){
			continue;
		}
		cnt++;
	}
	for(i=0;i<digit;i++){
		sum+=arr[i][digit-1-i];
		if(arr[i][digit-1-i]==0){
			continue;
		}
		cnt++;
	}
	if(digit%2!=0){
		cnt--;
		sum-=arr[(digit-1)/2][(digit-1)/2];
	}
	printf("sum = %d, count = %d.",sum,cnt);
}
