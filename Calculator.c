//Program for a Calculator (with basic functions and Matrix calculation)
#include <stdio.h>
#include <math.h>
int fact(int);
int CP(int);
int main()
{
    int star; //used for line breaks
    int A; //used for switch 1
    
    for (star=20; star > 0; star--)
    {
        printf ("* * ");
    }
    printf ("\n");

    //The Welcoming statement.
    printf("\nWelcome to the Basic Calculator by team 'Two_Rows_One_Column'\n");
    printf("In this calculator, you can run programs like basic algebra, trignometric functions, factorial functions and matrix functions\n\n");

    for (star=20; star > 0; star--)
    {
        printf ("* * ");
    }
    printf ("\n");
    
    switch(A)
    {
        case 1 : //Basic Algebra //DevDarsh's Part

        case 2 : //Trigonometroc Functions //Snith and Affan's Part
    
        case 3 : //Factorial //Niranjan's
       int main()
{
     int M;
    printf("Enter the menu number: ");
    scanf("%d",M);
    switch(M)
    {
        case 1:
        int main()
        {
            int num,a,n;
    printf("Enter the number:");
    scanf("%d",&num);
    a=fact(n);
    printf("Factorial of the given number=%d",a);
    }
    int fact(int x)
    {
        int F;
        if(x==0)
        {
            return 1;
        }
        else
        {
            F=x*fact(x-1);
            return F;
        }
        break;

    }

        case 2:
            int n,r,per,comb,f;
            printf("Enter the value of n:");
            scanf("%d",&n);
            printf("Enter the value of r:");
            scanf("%d",&r);
            f=CP(n);
            per=CP(n)/CP(n-r);
            comb=per/CP(r);
            printf("Permutation=%d",per);
            printf("Combination+%d",comb);
        }
        int CP(int y);
        {
           int F;
        if(y==0)
        {
            return 1;
        }
        else
        {
            F=y*CP(y-1);
            return F;
        }
        break;
        default:
        printf("invalid menu");
        }
        

      


    
     

        case 4 : //Matrix Functions //Jensen and Raaj's Part
    }

    return 0;
}