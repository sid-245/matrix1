#include<stdio.h>
int main()
{
    int i,j;
    int max [2][2];
    for(i=0; i<2; i++)
    {

        for(j=0; j<2; j++)
        {
            printf("enter the number=");
            scanf("%d",&max[i][j]);
        }
        // printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",max[i][j]);


        }
        printf("\n");
    }

    return 0;
}