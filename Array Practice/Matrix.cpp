#include<stdio.h>


int main (){
	int rows,columns;
	scanf("%d %d",&rows,&columns);
	int a[rows][columns],i,j,b[rows][columns],c[rows][columns];
	for( i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Enter : A %d%d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",i);	
    for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
           printf("Enter : B %d%d : ",i,j);
           scanf("%d",&b[i][j]);
        }
	}
	    for(i=0;i<rows;i++){
       		for(j=0;j<columns;j++){
       		c[i][j]=a[i][j]+b[i][j];
			}
	   	}
	   	printf("\n\n3rd matrix is :\n\n"); 
        for(i=0;i<rows;i++){
     	 for(j=0;j<columns;j++){
     		printf("c%d%d = %d\n",i,j,c[i][j]);
		 }
	 }    
	return 0;
}

