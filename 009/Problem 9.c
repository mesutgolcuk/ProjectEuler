//Mesut GÖLCÜK
// 02.2014
#include<stdio.h>
#include<math.h>
int main(){
	int a=1,b=2;
	float c;
	for(a=1;a<1000;a++){
		for(b=1;b<1000;b++){
			c=sqrt((a*a)+(b*b));
			//printf("%f\n ",c);

			if((a+b+c)==1000 && a<b &&b<c){
                		printf("%lf",a*b*c);
			}
		}
	}

	return 0;
}
