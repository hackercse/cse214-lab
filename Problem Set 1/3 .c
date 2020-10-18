#include<stdio.h>
int main()
{
    int a[100], max_size = 10, size = 0,i = 0;

    printf("Enter values :\n");
    while((scanf("%d",&a[i])) && a[i]!=0)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Overflow!!\n");
           break;
         }
         else
         {

         }

      }

    return 0;
}

