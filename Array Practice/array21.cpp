#include<stdio.h>


int main (){
	int i,j=0,target,a[10]={6,7,3,4,4,5,333,5,2,68};
	scanf("%d",&target);
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

