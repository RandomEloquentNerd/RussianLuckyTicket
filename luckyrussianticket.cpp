#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int sum1=0 , sum2=0, j, ticket[1000000], lucky=0, check[6];
	const int ticklim=1000000;
	for(j=0;j<ticklim;j++){
		ticket[j]=j;
	}

	for(j=0;j<ticklim;j++){
		sum1=0;sum2=0;
		check[0]=ticket[j]%10;
		check[1]=((ticket[j]%100)-(ticket[j]%10))/10;
		check[2]=((ticket[j]%1000)-(ticket[j]%100))/100;
		check[3]=((ticket[j]%10000)-(ticket[j]%1000))/1000;		
		check[4]=((ticket[j]%100000)-(ticket[j]%10000))/10000;		
		check[5]=((ticket[j]%1000000)-(ticket[j]%100000))/100000;		
		sum1=check[0]+check[1]+check[2];
		sum2=check[3]+check[4]+check[5];
		if(sum1==sum2){
//		printf("%d",ticket[j],"|");
		lucky++;
		}
	}
	printf("%d\n\n",lucky);
	return(0);
}
