#include<stdio.h>
#include<math.h>

main(){

int i,r=0,temp,bi[20],no,no1,sum=0;

   printf("Enter a binary number(1s and 0s)=");
   scanf("%d",&no);
   while(no>0)
    {
      no1=no;
      temp=no1%10;
      bi[r]=temp;
      no=no1/10;
        r++;
      }

  for(i=r-1;i>-1;i--)
    {

      sum+=bi[i]*pow(2,i);

}
    printf("\n Number=%d",sum);
    return 0;
}
