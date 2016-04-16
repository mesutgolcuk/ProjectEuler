//Mesut GÖLCÜK
//26.2.2014 23:41
#include<stdio.h>
#define LIMIT 4000000

int main(){
	int numb1=1,numb2=2,fibonacci,sum;
	fibonacci=0;
	sum=numb2;

		while(fibonacci<LIMIT){
			fibonacci=numb1+numb2;
			if(fibonacci%2==0){
                sum=sum+fibonacci;
			}
			numb1=numb2;
			numb2=fibonacci;
		}
		printf("Toplam: %d ",sum);
		return 0;
}
