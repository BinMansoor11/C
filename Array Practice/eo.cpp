#include<stdio.h>


int main (){
	int i,j=0,target,a[10];
	scanf("%d",&i);
	for(i=9;i>=0;i--)
	{
		if(i%2==0)
		{
			printf("even ",i+1);
			j=1;
		}
	
	}
	if(j==0){
		printf("\nodd");
	}
	return 0;
}

