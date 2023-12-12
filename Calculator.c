//Program for a Calculator (with basic functions and Matrix calculation)
#include <stdio.h>
#include <math.h>
int fact(int);
int CP(int);
int main()
{
    int star;   //used for line breaks
    int A,B,M; //used for switches
    int num,a,n,r,per,comb,f;
    float x,y,sum,diff,prod,div,sq,cube,rec;

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
    printf("1. BASIC FUNCTIONS\n");
    printf("2. TRIGONOMETRIC FUNCTIONS\n");
    printf("3. FACTORIAL\n");
    printf("4. MATRIX\n");
    printf("Choose any Option : ");
    scanf("%d",&A);
    
    switch(A)
    {
        //Basic Algebra //DevDarsh's Part
        case 1 : printf("1. ADDITION\n");
                 printf("2. SUBTRACTION\n");
                 printf("3. MULTIPLICATION\n");
                 printf("4. DIVISION\n");
                 printf("5. SQUARE\n");
                 printf("6. SQUARE ROOT\n");
                 printf("7. CUBE\n");
                 printf("8. CUBE ROOT\n");
                 printf("9. RECIPROCAL\n");
                 printf("Choose any option : ");
                 scanf("%d",&B);
                 switch(B)
                 {
                    case 1 : printf("Enter two numbers : \n");
                             scanf("%f%f",&x,&y);
                             sum=x+y;
                             printf("Sum of %f and %f = %f",x,y,sum);
                             break;
                    case 2 : printf("Enter two numbers : \n");
                             scanf("%f%f",&x,&y);
                             diff=x-y;
                             printf("Difference of %f and %f = %f",x,y,diff);
                             break;
                    case 3 : printf("Enter two numbers : \n");
                             scanf("%f%f",&x,&y);
                             prod=x*y;
                             printf("Product of %f and %f = %f",x,y,prod);
                             break;
                    case 4 : printf("Enter two numbers : \n");
                             scanf("%f%f",&x,&y);
                             div=x/y;
                             printf("Quotient of %f and %f = %f",x,y,div);
                             break;
                    case 5 : printf("Enter a number : \n");
                             scanf("%f",&x);
                             sq=x*x;
                             printf("Square of %f = %f",x,sq);
                             break;
                    case 6 : printf("Enter a number : \n");
                             scanf("%f",&x);
                             printf("Square Root of %f = %f",x,sqrt(x));
                             break;
                    case 7 : printf("Enter a number : \n");
                             scanf("%f",&x);
                             cube=x*x*x;
                             printf("Cube of %f = %f",x,cube);
                             break;
                    case 8 : printf("Enter a number : \n");
                             scanf("%f",&x);
                             printf("Cube Root of %f = %f",x,cbrt(x));
                             break;
                    case 9 : printf("Enter a number : \n");
                             scanf("%f",&x);
                             if(x==0)
                             {
                                printf("Reciprocal of zero is undefined");
                             }
                             else
                             {
                                rec=1/x;
                                printf("Reciprocal of %f = %f",x,rec);
                             }
                             break;
                    default : printf("Invalid Menu Number");
                              break;
                 }
                 break;
        //Trigonometroc Functions //Snith and Affan's Part
        case 2 : 
        printf("1. Sine of the angle\n");

        //Factorial //Niranjan's
        case 3 : printf("Enter the menu number: ");
                 scanf("%d",M);
                 switch(M)
                 {
                    case 1 : printf("Enter the number:");
                             scanf("%d",&num);
                             a=fact(n);
                             printf("Factorial of the given number=%d",a);
                 }
                 int fact(int u)
                 {
                    int F;
                    if(u==0)
                    {
                        return 1;
                    }
                    else
                    {
                        F=u*fact(u-1);
                        return F;
                    }
                             break;

                 }

                    case 2 : printf("Enter the value of n : ");
                             scanf("%d",&n);
                             printf("Enter the value of r : ");
                             scanf("%d",&r);
                             f=CP(n);
                             per=CP(n)/CP(n-r);
                             comb=per/CP(r);
                             printf("Permutation = %d",per);
                             printf("Combination = %d",comb);
                 int CP(int v);
                 {
                 int F;
                 if(v==0)
                 {
                    return 1;
                 }
                 else
                 {
                    F=y*CP(v-1);
                    return F;
                 }
                 }
                    default : printf("Invalid Menu Number");
                              break;

        //Matrix Functions //Jensen and Raaj's Part
        case 4 : 
        

        default : printf("Invalid Menu Number");
                  break;
    }

    return 0;
}