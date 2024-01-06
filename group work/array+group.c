#include<stdio.h>
// 1
int main()
{
    int n;
    printf("length of the array : ");
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&str[i]);
    }
    printf("elements in the array are : ");
     for(int i=0;i<n;i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}

#include<stdio.h>
//2
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++)
    {
        printf("elment - %d : ",i+1);
        scanf("%d",&str[i]);
    }
    int i=0,j=n-1,temp;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("array of elements in reversed order : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}


#include<stdio.h>
//3
int main()
{
    int n;
    printf("intput the number to be stored in array : ");
    scanf("%d",&n);
    int arr[n];
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of all elements stored in the array is : %d",sum);
}

#include<stdio.h>
//5
int main()
{
    int n;
    printf("intput the number to be stored in array : ");
    scanf("%d",&n);
    int arr[n],count=0,arr1[n],i,j,k,count1=0;
    for(int i=0;i<n;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            for(j=i+1,k=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    arr1[k]=arr[j];
                    if(arr1[k]==arr[j])
                    break;
                    k++;
                    count1++;
                    
                }
            }
    }
    printf("elements are duplicate in the array are : ");
    for(i=0;i<count1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nthe number of element duplicate in the array is : %d",count);
    return 0;
}

#include<stdio.h>
//6
int main()
{
    int n,i,j,k,count=0;
    printf("element number of array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(arr[i]==arr[j])
            count++;
        }
        if(count==0)
        printf("%d ",arr[i]);
    }
    return 0;
}


#include<stdio.h>
//7
void descending(int *arr,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[2*n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=n,j=0;i<=2*n;i++,j++)
    {
        arr3[i]=arr2[j];
    }
    descending(arr3,n);
    for(int i=0;i<n*2;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}

void descending(int *arr,int n)
{
    int temp;
    for(int i=0;i<n*2;i++)
    {
        for(int j=i+1;j<n*2;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// 8
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr1[i]=1; //initializing arr1 all element to 0
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(arr[i]==arr[j])
            arr1[i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d occurs %d times\n",arr[i],arr1[i]);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// 9
int maximum(int *arr,int n);
int minimum(int *arr,int n);
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = maximum(arr,n);
    int min = minimum(arr,n);
    printf("maximum element is : %d\n",max);
    printf("minimum element is : %d\n",min);
    return 0;

}
int maximum(int *arr,int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int minimum(int *arr,int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// 10
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int lenghteven=0,lengthodd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        lenghteven++;
        else
        lengthodd++;
    }
    int even[lenghteven],odd[lengthodd];
    int p=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[p]=arr[i];
            p++;
        }
        else
        {
            odd[r]=arr[i];
            r++;
        }
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        printf("%d ",odd[i]);
    }

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// 13
void ascendeing(int *arr,int n);
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int value;
    printf("enter value to insert : ");
    scanf("%d",&value);
    arr[n]=value;
    ascending(arr,n+1);
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}
void ascending(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//14
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos,value;
    printf("enter pos to insert : ");
    scanf("%d",&pos);
    printf("enter value to insert : ");
    scanf("%d",&value);
    for(int i=n;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// 15
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("enter pos to delete : ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void descending(int *arr,int n);
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    descending(arr,n);
    printf("2nd largest element is : %d",arr[1]);
    return 0;
}

void descending(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void ascending(int *arr,int n);
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ascending(arr,n);
    printf("2nd smallest element is : %d",arr[1]);
    return 0;
}

void ascending(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//18
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//19
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],arr1[n][n],sum[n][n];
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
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//19
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],arr1[n][n],sum[n][n];
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
            sum[i][j]=arr[i][j]-arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

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