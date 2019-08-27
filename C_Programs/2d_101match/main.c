#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100];
    int row,col,count1s=0,count0s=0;
    scanf("%d %d",&row,&col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==1)
                count1s++;
            else if(a[i][j]==0)
                count0s++;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            if(count1s>count0s)
            {
                if((i+j)%2==0 && count0s)
                {
                    a[i][j]=0;
                    count0s--;
                }
                else
                {
                    a[i][j]=1;
                }
            }
            else if(count1s<count0s)
            {
                if((i+j)%2!=0 && count1s)
                    {
                        a[i][j]=1;
                        count1s--;
                    }
                    else{
                        a[i][j]=0;

                    }
            }
    }

}
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            if(count1s>count0s)
            {
                if(a[i][j]!=0)
                    a[i][j]=1;

            }
            else if(count1s<count0s)
            {
                if(a[i][j]!=1)
                    a[i][j]=0;

            }
        }
    }

for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}

