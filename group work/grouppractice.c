#include<stdio.h>
// problem 2
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is an even interger",a);
    else 
    printf("%d is an odd integer",a);
    return 0;
}

#include<stdio.h>
// problem 3
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    printf("%d is a positive number",a);
    else 
    printf("%d is a negative number",a);
    return 0;
}

#include<stdio.h>
// problem 4
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0 || ((year%4==0) && (year%100!=0)))
    {
        printf("%d is a leap year",year);
    }
    else 
    printf("%d isn't a leap year",year);
}

#include<stdio.h>
// problem 8
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("the 1st number is greatest among three");
        }
        else
        {
            printf("the 3rd number is greatest among three");
        }
    }
    else
    {
        if(b>c)
        {
            printf("the 2nd number is greatest among three");
        }
        else
        {
            printf("the 3rd number is greatest among three");
        }
    }
return 0;
}

#include<stdio.h>
#include<math.h>
// problem 11
int main()
{
    int a,b,c,d;
    float x,y;
    printf("input a,b & c = ");
    scanf("%d %d %d ",&a,&b,&c);
    d = b*b-4*a*c;

    if(d==0)
    {
        printf("both roots are equal\n");
        x=-b/(2.0*a);
        x = y;
        printf("1st root and 2nd root = %f\n",x);
    }
    else if(d > 0)   // not giving the output
    {
        printf("both roots are real number.\n");
        x=(-b+sqrt(d))/(2*a);
	    y=(-b-sqrt(d))/(2*a);
        printf("1st root = %f\n",x);
        printf("2nd root = %f\n",y);
    }
    else
    {
        printf("roots are imaginary.\n");
        printf("no solution.");
    }
// return 0;
}

#include<stdio.h>
// problem 13
int main()
{
    int tmp;
    printf("today's temperature = ");
    scanf("%d",tmp);
    if(tmp<0)
    printf("freezing weather\n");
    else if(tmp<10)
    printf("very cold weather\n");
    else if(tmp<20)
    printf("Cold weather\n");
    else if(tmp<30)
    printf("Normal in temp");
    else if(tmp<40)
    printf("it's hot");
    else
    printf("it's very hot");

    return 0;
}

#include<stdio.h>
// prblm 14

int main()
{
    int a,b,c;
    printf("enter 3 sides value =");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c && c==a)
    printf("this is an equilateral triangle.\n");
    else if(a== b ||b==c || c==a)
    printf("this is an isosceles triangle.\n");
    else
    printf("this is an scalene triangle.\n");

    return 0;
}

#include<stdio.h>
// prblm 14
int main()
{
char ch;
printf("enter the char = ");
scanf("%c",&ch);

if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
{
printf("it's an alphabet. ");
}
else if(ch>='0' && ch<='9')
{
printf("it's an digit");
}
else 
{
printf("it's an special character.");
}
return 0;
}

#include<stdio.h>
//problem 24
int main()
{
    int month,year;
    printf("month number = ");
    scanf("%d",&month);
    printf("enter year = ");
    scanf("%d",&year);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            printf("year = %d\n",year);
            printf("this month have 31 days.\n");
            break;
    case 2:
            if(year%400==0 || (year%4==0 && year%100!=0))
            {
                printf("year = %d\n",year);
                printf("it's a leap year.\n");
                printf("this month have 29 days\n");
            }
            else{
                    printf("year = %d\n",year);
                    printf("this month have 28 days.\n");
            }
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("year = %d\n",year);
            printf("this month have 30 days.\n");
            break;
    default:
            printf("month can't be is less 0 and can't be greater than 12");
            break;
    } 
return 0;
}




#include<stdio.h>
int main()
{
    int n,num,sum=0,i;
    float avg;
    printf("enter number you want to calcualte = ");
    scanf("%d",&n);
    printf("enter %d number = \n",n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum = sum + num;
        // printf("number is %d : the cube of the %d = %d",i,i,(i*i*i));
    }
    avg = (float)sum/n;
    printf("sum = %d\n",sum);
    printf("average = %f\n",avg);

    for(i=1;i<=n;i++)
    {
        printf("number is %d : the cube of the %d = %d\n",i,i,(i*i*i));
    }
    printf("table of %d : \n");
    for(i=1;i<=10;i++)
    {
        int mul = i*n;
        printf("%d * %d = %d \n",i,n,mul);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,sum1 = 0,j,sum2=0;
    printf("enter range = ");
    scanf("%d",&n);
    printf("the odd numbers are : ");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum1 = sum1 + i;
            printf(" %d \t",i);
            printf("\n");
        }
    }
    printf("sum of odd natural number under %d = %d \n\n\n",n,sum1);
    
    printf("\nthe even numbers are : ");
     for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum2=sum2+i;
            printf("%d \t",i);
            printf("\n");
        }
    }
    
    printf("\nsum of even natural number under %d = %d \n",n,sum2);
}


#include<stdio.h>
//9
int main()
{
    int i,j,n;
    printf("enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}

#include<stdio.h>
//10
int main()
{
    int i,j,rows;
    printf("enter n = ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
}

#include<stdio.h>
//11
int main()
{
    int i,j,rows;
    printf("enter rows number = ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
//11
int main()
{
    int i,j,rows;
    printf("enter rows number = ");
    scanf("%d",&rows);
    int n = 0;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            n++;
            printf("%d ",n);
        }
        printf("\n");
    }
return 0;
}

#include<stdio.h>
//13
int main()
{
    int i,j,k,row,space,n=0;
    printf("enter number = ");
    scanf("%d",&row);
    space = row-1;
    for(i=1;i<=row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            n++;
            printf("%d ",n);
        }
        printf("\n");
        space--;
    }
    return 0;
}

#include<stdio.h>
//14
int main()
{
    int i,j,k,row,space;
    printf("enter row = ");
    scanf("%d",&row);
    space = row -1;
    for(i=1;i<=row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
}

#include<stdio.h>
//15
int main()
{
    int i,n,fact=1;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d",n,fact);

    return 0;
}

#include<stdio.h>
//17
int main()
{
    int i,j,k,row,space;
    printf("enter row = ");
    scanf("%d",&row);
    space = row -1;
    for(i=1;i<=row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            int n = k;
            printf("%d ",i);
        }
        printf("\n");
        space--;
    }
}

#include<stdio.h>
//19
int main()
{
    int i,n;
    float sum=0;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + 1/(float)i;
    }
    printf("sum = %f",sum);
    return 0;
}

#include<stdio.h>
//20
int main()
{
    int i,j,k,space,row;
    printf("enter row = ");
    scanf("%d",&row);
    space = row-1;
    for(i=1;i<=row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
        space--;;
    }
}


#include<stdio.h>
//20 for even numbers
int main()
{
    int i,j,k,space,row;
    printf("enter row = ");
    scanf("%d",&row);
    space = row-1;
    for(i=1;i<=row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i;k++)
        {
            printf("*");
        }
        printf("\n");
        space--;;
    }
}

#include<stdio.h>
//20 for odd numbers
int main()
{
    int i,j,k,space,row;
    printf("enter row = ");
    scanf("%d",&row);
    space = row-1;
    for(i=0;i<row;i++)
    {
        for(j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
        space--;;
    }
}

#include<stdio.h>
//21
int main()
{
    int i,j,sum=0,n;
    int result = 0;
    printf("input the number of terms = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum*10 + 9;
        result = result + sum;
        printf("%d\t",sum);
    }
    printf("\nthe sum of the series = %d ",result);
    return 0;
}


#include<stdio.h>
//22
// floyd's triangle
int main()
{
    int i,j,rows;
    int p,q;
    printf("enter row = ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        if(i%2!=0)
        {
            p=1;
            q=0;
        }
        else 
        {
            p=0;
            q=1;
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d",q);
            }
            else
            {
                printf("%d",p);
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
//25
int main()
{
    int i,n;
    printf("input the number of terms : ");
    scanf("%d",&n);
    int sum=0;
    printf("the square natural upto %d terms are : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",(i*i));
        sum=sum+(i*i);
    }
    printf("\nthe sum of Square Natural upto %d terms :%d",n,sum);
    return 0;
}


#include<stdio.h>
//26
int main()
{
    int i,j,sum=0,number;
    printf("enter number of terms = ");
    scanf("%d",&number);
    int result = 0;
    for(i=1;i<=number;i++)
    {
        sum = sum * 10 + 1;
        result = result + sum;
        printf("%d + ",sum);
    }
    printf("\nthe sum is = %d",result);
    return 0;
}

#include<stdio.h>
//27
int main()
{
    int i,j,sum = 0,num;
    printf("enter number = ");
    scanf("%d",&num);
    printf("the perfect divisor are :  ");
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d \t",i);
            sum = sum + i;
        }
    }
    printf("\nthe sum of the divisor is = %d ",sum);
    if(num==sum)
    {
        printf("\nthe number is a perfect number.");
    }
    else
    {
        printf("\nthe number isn't a perfect number.");
    }
    return 0;
}

#include<stdio.h>
//28
int checkperfect(int,int);
int main()
{
    int num1,num2,k;
    printf("starting range = ");
    scanf("%d",&num1);
    printf("ending range = ");
    scanf("%d",&num2);
    checkperfect(num1,num2);
}
int checkperfect(int num1,int num2)
{
    int i,j;
    printf("the perfect number within given range = ");
    for(i=num1;i<=num2;i++)
    {
        int sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
        }
        if(i==sum)
        {
           printf("%d\t",i);
        }
    }
}


#include<stdio.h>
#include<math.h>
//29
int main()
{
    int i,digit,sum=0,num;
    printf("enter the number = ");
    scanf("%d",&num);
    int test = num;  /// this line is an important note(we use test as num without using num directly)
    for(i=test;test!=0;test/=10)
    {
        digit = test%10;
        sum = sum + (digit*digit*digit);
         printf("sum %d\n",sum);
    }
   
    if(num == sum)
    {
        printf("\n%d is an armstrong number",num);
    }
    else
    {
        printf("%d isn't an armstrong number",num);
    }
}

#include<stdio.h>
//30
int main()
{
    int num1,num2,i,j;
    printf("starting range = ");
    scanf("%d",&num1);
    printf("ending range = ");
    scanf("%d",&num2);
    printf("the armstrong number within given range = ");
    for(i=num1;i<=num2;i++)
    {
        int sum =0;
        for(j=i;j!=0;j/=10)
        {
            int r=j%10;
            sum = sum + (r*r*r);
        }
        if(i==sum)
        printf("%d\t",i);
    }
}


#include<stdio.h>
//31
int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    int space=n-1;
    for(i=1;i<=n;i++)
    {
        for(int k=space;k>0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
        printf("*");
        }
        printf("\n");
        space--;
    }
    int space1=1;
    for(int p=n-1;p>0;p--)
    {
        for(int q=0;q<space1;q++)
        {
            printf(" ");
        }      
        for(int r=2*p-1;r>0;r--)
        {
            printf("*");
        }
        space1++;
        printf("\n");
    }
}

#include<stdio.h>
//33
int main()
{
    int i,j,n,row;
    printf("enter row : ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf("  ");
        }
        for(int k=0;k<=i;k++)
        {
            if(i==0||k==0)
            {
                n=1;
            }
            else
            {
                n=n*(i-k+1)/k;      // this condition must be remembered
            }
            printf("%4d",n);
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
//35
int main()
{
    int n,n1,n2,i;
    n1=0;
    n2=1;
    printf("enter the terms : ");
    scanf("%d",&n);
    printf("fabonacci series upto %d terms : %d %d ",n,n1,n2);
    for(int i=3;i<=n;i++)
    {
        int sum=n1+n2;
        printf("%d ",sum);
        n1=n2;
        n2=sum;
    }
    printf("\n");
}

#include<stdio.h>
//37
int main()
{
    int n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        int z=n%10;
        sum= (sum*10) + z;
        n/=10;      
    }
    printf("the number in reverse order is : %d",sum);
    return 0;
}

#include<stdio.h>
//38
int main()
{
    int n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int test=n;
    while(n>0)
    {
        int z=n%10;
        sum=sum*10+z;
        n/=10;
    }
    if(sum==test)
    {
        printf("%d is a palindrome number.",test);
    }
    else
    {
        printf("%d isn't a palindrome number.",test);
    }
    return 0;
}


#include<stdio.h>
//39
int main()
{
    int n1,n2,i;
    printf("enter the range : ");
    scanf("%d %d",&n1,&n2);
    int sum=0;
    printf("Numbers between %d and %d,divisible by 9 : ",n1,n2);
    for(i=n1;i<n2;i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("the sum : %d",sum);
}


// #include<stdio.h>
// //36
// int main()
// {
//     int n,i,j,row;
//     printf("enter row : ");
//     scanf("%d",&row);
//     int space=row;
//     for(i=1;i<=row;i++)
//     {
//         // int n=1;
//         for(j=1;j<space;j++)
//         {
//             printf(" ");
//             space--;
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("%d",k);
//             // n++;
//         }
//         for(int p=i-1;p>=1;p--)
//         {
//             printf("%d",p);
//         }
//         printf("\n");
//     }
//     return 0;
// }

///incompleted

#include<stdio.h>
//45
int main()
{
    int n1,n2;
    printf("first number for LCM : ");
    scanf("%d",&n1);
    printf("second number for LCM : ");
    scanf("%d",&n2);
    
}