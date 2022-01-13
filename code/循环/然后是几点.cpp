#include <stdio.h>
int main(){
	int time,pass,fenzhong,xiaoshi,xiaoshihou,passxiaoshi,houfenzhong,shengyufenzhong,zongshijian;
	scanf("%d %d",&time,&pass);
	if(pass>=0){
		fenzhong=time%100;
		xiaoshi=time/100;
		xiaoshihou=xiaoshi+(fenzhong+pass)/60;
		passxiaoshi=(xiaoshihou-xiaoshi);
		houfenzhong=(fenzhong+pass)-60*passxiaoshi;
		zongshijian=xiaoshihou*100+houfenzhong;
		if(xiaoshihou==0) 
		printf("0%d",zongshijian);
		else 
		printf("%d",zongshijian);
	}
	if(pass<0){
		fenzhong=time%100;
		xiaoshi=time/100;
		if(xiaoshi==0){
			houfenzhong=fenzhong+pass;
			zongshijian=xiaoshi*100+houfenzhong;
			printf("%d",zongshijian);
		}
		else{
			xiaoshihou=xiaoshi+(fenzhong+pass)/60-1;
			passxiaoshi=xiaoshi-xiaoshihou;
			houfenzhong=60-(-(pass+fenzhong)-60*(passxiaoshi-1));
			zongshijian=xiaoshihou*100+houfenzhong;
			if(xiaoshihou==0){
				printf("0%d",zongshijian);
			} 
			else printf("%d",zongshijian);
		}
		
}
	}
