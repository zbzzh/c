#include<stdio.h>
int main(){
	int year,month,day,ret;
	int jan=31,feb=28,mar=31,apr=30,may=31,jun=30,jul=31,aug=31,sep=30,oct=31,nov=30,dec=31;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%4==0&&year%400==0)
	feb=29;
	switch(month){
		case 1:ret=day;
		break;
		case 2:ret=jan+day;
		break;
		case 3:ret=jan+feb+day;
		break;
		case 4:ret=jan+feb+mar+day;
		break;
		case 5:ret=jan+feb+mar+apr+day;
		break;
		case 6:ret=jan+feb+mar+apr+may+day;
		break;
		case 7:ret=jan+feb+mar+apr+may+jun+day;
		break;
		case 8:ret=jan+feb+mar+apr+may+jun+jul+day;
		break;
		case 9:ret=jan+feb+mar+apr+may+jun+jul+aug+day;
		break;
		case 10:ret=jan+feb+mar+apr+may+jun+jul+aug+sep+day;
		break;
		case 11:ret=jan+feb+mar+apr+may+jun+jul+aug+sep+oct+day;
		break;
		case 12:ret=jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+day;
		break;
	} 
	printf("%d年%d月%d日是第%d天",year,month,day,ret);
	return 0;
}
