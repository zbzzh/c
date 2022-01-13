#include<stdio.h>
int main(){
	int ji,tu,xie;
	for(xie=1;xie<=100;xie++)
		for(tu=1;tu<=100;tu++)
			for(ji=1;ji<=100;ji++)
				if(xie*8+tu*4+ji*2==100){
				printf("%dÖ»¼¦%dÖ»ÍÃ%dÐ·",ji,tu,xie);
				printf("\n");
				}
				
}
