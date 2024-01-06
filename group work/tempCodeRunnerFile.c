#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],arr1[n][n],mul[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
        {
            mul[i][k]=mul[i][k] + (arr[i][j]*arr1[j][i]);
        }
        k++;
        for(int j=0;j<n;j++)
        {
            mul[i][k]=mul[i][k] + (arr[i][j]*arr1[j][i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }



}