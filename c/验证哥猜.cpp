#include <stdio.h>
int sushu(int n)
{
	int i,leep=1;
	for(i=2;i<=n/2+1;i++)
		if(n%i==0)
		{
			leep=0;
			break;
		}
	return leep;
}

int main()
{
	int sum,i;
	scanf("%d",&sum);
	for(i=2;i<=sum/2;i++)
	if(sushu(i)&&sushu(sum-i))
	printf("%d=%d+%d\n",sum,i,sum-i);
}

