//Mesut GÖLCÜK
#include<stdio.h>
int main(){
	int numb,i,count;
	numb=2520;
	do{
		numb=numb+2520;
		//printf("%d\n",numb);
		count=0;
		for(i=1;i<=20;i++){
			if(numb%i==0){
				count=count+1;
			}
		}

	}while(count!=20);
        printf("%d",numb);
	return 0;
}
