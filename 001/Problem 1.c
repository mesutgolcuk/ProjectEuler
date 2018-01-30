	//Mesut GÖLCÜK
	//26.2.2014 23:10
#include<stdio.h>

int main(){
	int sum=0;
	int i=0;

	while(i<1000){
		if(i%3==0){
			sum=sum+i;
		}
		else if(i%5==0){
			sum=sum+i;
		}
		i++;
	}

	printf("Toplam: %d",sum);
	return 0;
}
