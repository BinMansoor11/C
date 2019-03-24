#include<stdio.h>

int main (){
	int a[10],i,j,min=999999,max=2,temp=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]>max){
			temp=max;
		max=a[i];
      	}
		else{
			if(temp<a[i]){
				temp=a[i];
			}
		}
		
	}
	printf("2nd largest no.= %d",temp);
	return 0;
}

