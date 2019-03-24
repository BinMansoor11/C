#include <stdio.h>
#include <conio.h>
#include <windows.h>

void checkPrimeNumber();

int main()
{
    checkPrimeNumber();    // no argument is passed to prime()
	return 0;
}

// return type of the function is void becuase no value is returned from the function
void checkPrimeNumber()
{
    int n, i, flag=0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i <= n/2; i++) // 
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1){
        printf("%d is not a prime number.\n\nDo you want to continue? ? ?\n press any number!!!", n);
          getch();
    system("cls");
    checkPrimeNumber(); 
    }
    else
        printf("%d is a prime number.\n\nDo you want to continue? ? ?\n press any number!!!", n);
          getch();
    system("cls");
    checkPrimeNumber(); 
}
