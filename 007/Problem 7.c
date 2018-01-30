//Mesut GÖLCÜK    28.2.14
#include<stdio.h>
int main(){
	int i,numb=2,count=0,countPrime=0;
	while(countPrime!=10001){
		numb++;
		count=0;
		for(i=2;i<numb/2;i++){
			if(numb%i==0){
				count++;
			}
		}
		if(count==0){
			countPrime++;
			//printf("%d\n",countPrime);
		}
	}
	printf("Number: %d",numb);
	return 0;
}
