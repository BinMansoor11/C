#include<stdio.h>
#include<math.h>
void binary(void);
void octal(void);
void hexa(void);
void decimal(void);
void star(void);
void bnumber(void);
void onumber(void);
void hnumber(void);
void dnumber(void);

main()
{
    int no;
    char ch;
    star();
    printf("\t\t Menu\t\t");
    star();
    printf("\n 1--Number to Binary");
    printf("\n 2--Number to Octal");
    printf("\n 3--Number to Decimal");
    printf("\n 4--Number to Hexa-Decimal");
    printf("\n 5--Binary to Number");
    printf("\n 6--Octal to Number");
    printf("\n 7--Decimal to Number");
    printf("\n 8--Hexa-Decimal to Number");
    do
    {
    printf("\n Select any Number=");
    scanf("%d",&no);
    if(no==1)
        binary();
    else if(no==2)
        octal();
    else if(no==3)
        decimal();
    else if(no==4)
            hexa();
    else if(no==5)
            bnumber();
    else if(no==6)
            onumber();
    else if(no==7)
            dnumber();
    else if(no==8)
           hnumber();
    else
        printf("\n invalid choice");
   printf("\n Do you to Continue it (Y/N)=");
   scanf("%s",&ch);
    }while(ch=='y'|| ch=='Y');
}
void binary(void)
{
    int no1,st=0,rem,c=0,n=0,bi[20],i;
    int sum=0;
    printf("\n Enter any number to convert into Binary Number=");
    scanf("%d",&no1);
    printf("\n Binary Number =");
    while(no1>0)
    {
        st=no1;
        rem=st%2;
        bi[c]=rem;
        no1=st/2;
        printf("%d",bi[c]);
        c+=1;
    }


  /*  for(i=c-1;i>-1;i--)
    {

        sum+=bi[i]*pow(2,n);
    n++;
       }
  printf("\n Number=%d",sum);*/
}
void octal(void)
{
     int no1,st,bi;
    printf("\n Enter any number to convert into Octal Number=");
    scanf("%d",&no1);
    printf("\n Octal Number =");
    while(no1>0)
    {
        st=no1;
        bi=st%8;
        no1=st/8;
        printf("%d",bi);
}
}
void decimal(void)
{
     int no1,st,bi;
    printf("\n Enter any number to convert into Decimal=");
    scanf("%d",&no1);
    printf("\n Decimal Number =");
    while(no1>0)
    {
        st=no1;
        bi=st%10;
        no1=st/10;
        printf("%d",bi);
}
}
void hexa(void)
{

     int no1,st,bi;
    printf("\n Enter any number to convert into Hexa-Decimal=");
    scanf("%d",&no1);
    printf("\n Hexa-Decimal Number =");
    while(no1>0)
    {
        st=no1;
        bi=st%16;
        no1=st/16;
        printf("%d",bi);
}
}
void star(void)
{
  int i;
  for(i=0;i<=60;i++)
        printf("*");
  }
void bnumber(void)
{
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
      printf("\n Number=%d",sum);

}
    printf("\n Number=%d",sum);
}
void onumber(void)
{

}
void dnumber(void)
{

}
void hnumber(void)
{

}

