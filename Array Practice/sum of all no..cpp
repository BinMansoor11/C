#include<stdio.h>
#include<conio.h>
main(){
	int size,i,sum=0;
	int a[size];
	printf("\n Enter size :");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter no. :");
		scanf("%d",&a[i]);
		printf("no.s :",a[i]);
		sum=sum + a[i];
	
	}	printf("ans = %d",sum);
	getch();
}
