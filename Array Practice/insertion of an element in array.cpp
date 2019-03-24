#include<stdio.h>

main(){
	int a[100];
	int i,size,num,pos,loc;
	
	printf("Enter size : ");
	scanf("%d",&size);
	printf("Enter array elements :");
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter element to be inserted :");
	scanf("%d",&num);
	printf("Enter position to be inserted :");
	scanf("%d",&pos);
	if(pos>size+1 || pos<=0){
		printf("invalid choice num shoud be between 1 & %d ",num);
	}
		else{
			for(i=size;i>=pos;i--){
				a[i]=a[i-1];
			}
			a[pos-1]=num;
			size++;
			for(i=0;i<size;i++){
				printf("%d\t",a[i]);
			}
		}
	return 0;
}
