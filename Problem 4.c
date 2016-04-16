//Mesut GÖLCÜK  27.2.14

#include<stdio.h>

int main(){
	int i,j,k,m,check,temp,palind[9],palindrome;
	for(i=900;i<1000;i++){
		for(j=900;j<1000;j++){
			check=i*j;
			temp=check;
			m=0;
			k=0;
			while(check>=10){
				palind[k]=check%10;
				check=check/10;
				k++;
			}
			palind[k]=check;
			while(palind[k]==palind[m] && m<=k){
				k--;
				m++;	
			}
			if(m>k){
			palindrome=temp;	
			}
		}
	}
	printf("Largest Palindrome is : %d",palindrome);
	return 0;
	
}
