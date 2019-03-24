
#include<stdio.h>
//BUBBLE SORT 

int main (){
	int i,j=0,temp,a[10]={6,7,3,4,4,5,333,5,2,68};
	for(i=0;i<10;i++){
		for( j=i;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	
	return 0;
}

