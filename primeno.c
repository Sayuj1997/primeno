#include <stdio.h>

int main()
{
    //printf("Hello world!\n");
    int n,flag=0;
    printf("Enter the no.");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("It is not prime nor composite");
    }
    else
    {
    if(flag==0)
    {
     printf("It is a prime no");
    }
    else{
        printf("it is not a prime no");
    }
    }
  return 0;
}
