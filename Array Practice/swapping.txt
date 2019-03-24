#include<stdio.h>
void swap(int *x,int *y){
	int temp; 
	temp=*x;
	*x=*y;
	*y=temp;
}
int main (){
	int a,b;
	scanf("%d%d",&a,&b);
	//printf("%x %x",&a,&b);
	printf("\na= %d , b= %d ",a,b);
	swap(&a,&b);
	printf("\na= %d , b= %d ",a,b);
	return 0;
}

