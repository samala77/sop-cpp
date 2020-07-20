#include <stdio.h>
int p(int n)
{
    int i,x=1;
    if(n==2)
    {
        x=1;
    }
    else{
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                x=0;
            }
        }
    }
    return x;
}
int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=2;i<n/2;i++)
   {
       if(p(i)==1)
       {
           if(p(n-i)==1)
           {
               printf("%d=%d+%d\n",n,i,n-i);
           }
       }
   }
 }
