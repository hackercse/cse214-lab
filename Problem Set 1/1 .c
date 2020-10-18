#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0, N, i;

    printf("value of N : ");
    scanf("%d",&N);


        if(N>max_size)
        {
            printf("!!Overflow!!\n");
        }

        else
        {
            for(i=0;i<N;i++)
            {
              scanf("%d",&a[i]);
            }
        }

    return 0;
}
