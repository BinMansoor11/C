#include<stdio.h>
main(){
	int i,a[5]={2,4,6,8,10},sum=0;
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	return 0;
}
