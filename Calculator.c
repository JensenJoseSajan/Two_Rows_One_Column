//Program for a Calculator (with basic functions and Matrix calculation)
#include <stdio.h>
#include <math.h>
void line_break(int);
int factorial(int);
int permutations(int,int);
int combinations(int,int);
void line_break(int so) //used for line break
{
    int star;
    for(star=32; star>0; star--)
    {
        printf("* * ");
    }
    printf("\n");
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    return 1;
    else
    return n * factorial(n - 1);
}
int permutations(int n, int r)
{
    if (n < r)
    return 0;
    else
    return factorial(n) / factorial(n - r);
}
int combinations(int n, int r)
{
    if (n < r)
    return 0;
    else
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
   int star;   //used for line breaks
   int A,B,M,F,T; //used for switches
   int num,a,m,n,r,sum=0,r1,r2,c1,c2,result,i,j,k,z;
   float x,y,c=0,d=1,e,norm;
   double ang,rad,tr; //ang is to be inputed by the user, rad is the radian value of the angle

   line_break(st); //line break

   //The Welcoming statement.
   printf("\nWelcome to the Basic Calculator by team 'Two_Rows_One_Column'.\n");
   printf("In this calculator, you can run programs like Basic Algebra, Trigonometric Functions, Factorial Functions and Matrix Functions.\n\n");

   line_break(st) //line break
   printf ("\n");

   printf("1. BASIC FUNCTIONS\n");
   printf("2. TRIGONOMETRIC FUNCTIONS\n");
   printf("3. FACTORIAL\n");
   printf("4. MATRIX\n");
   printf("\nChoose a Function : ");
   scanf("%d",&A);

   printf ("\n");
   line_break(st) //line break
   printf ("\n");
    
   switch(A)
   {
     //Basic Algebra //Dev Darsh's Part
     case 1 : printf("1. ADDITION\n");
              printf("2. SUBTRACTION\n");
              printf("3. MULTIPLICATION\n");
              printf("4. DIVISION\n");
              printf("5. SQUARE\n");
              printf("6. SQUARE ROOT\n");
              printf("7. CUBE\n");
              printf("8. CUBE ROOT\n");
              printf("9. RECIPROCAL\n");
              printf("10. POWER\n");
              printf("\nChoose a Function : ");
              scanf("%d",&B);
               
              printf ("\n");
              line_break(st) //line break
              printf ("\n");
               
              switch(B)
              {
                 case 1 : printf("How many numbers do you want to add ?\n");
                          scanf("%d",&z);
                          printf("Enter the numbers : \n");
                          for(i=1; i<=z; i++)
                          {
                              scanf("%f",&x);
                              c=c+x;
                          }
                          printf("Sum = %f",c);
                          break;
                 case 2 : printf("Enter two numbers : \n");
                          scanf("%f\n%f",&x,&y);
                          c=x-y;
                          printf("Difference of %f and %f = %f",x,y,c);
                          break;
                 case 3 : printf("How many numbers do you want to multiply ?\n");
                          scanf("%d",&z);
                          printf("Enter the numbers : \n");
                          for(i=1; i<=z; i++)
                          {
                              scanf("%f",&x);
                              d=d*x;
                          }
                          printf("Product = %f",d);
                          break;
                 case 4 : printf("Enter the Divident and Divisor : \n");
                          scanf("%f%f",&x,&y);
                          c=x/y;
                          e=fmod(x,y);
                          printf("Quotient = %f",c);
                          printf("Remainder = %f",e);
                          break;
                 case 5 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x;
                          printf("Square of %f = %f",x,c);
                          break;
                 case 6 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("Square Root of %f = %f",x,sqrt(x));
                          break;
                 case 7 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x*x;
                          printf("Cube of %f = %f",x,c);
                          break;
                 case 8 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("Cube Root of %f = %f",x,cbrt(x));
                          break;
                 case 9 : printf("Enter a number : ");
                          scanf("%f",&x);
                          if(x==0)
                          {
                              printf("MATH ERROR!\n");
                              printf("Please enter a number other than zero\n");
                          }
                          else
                          {
                              c=1/x;
                              printf("Reciprocal of %f = %f",x,c);
                          }
                          break;
                 case 10: printf("Enter the base: \n");
                          scanf("%f",&x);
                          printf("Enter the exponent: \n");
                          scanf("%f",&y);
                          printf("%f^%f = %f",x,y,pow(x,y));
                          break;
                 default: printf("Invalid Menu Number");
                          break;
              }
              break;
     //End of Dev Darsh's Part  
        
     //Trigonometric Functions //Snith and Affan's Part
     case 2 : printf("1. Sine of the angle\n");
              printf("2. Cosine of the angle\n");
              printf("3. Tangent of the angle\n");
              printf("4. Cotangent of the angle\n");
              printf("5. Secant of the angle\n");
              printf("6. Cosecant of the angle\n");
              printf("7. Inverse of Sine of angle\n");
              printf("8. Inverse of Cosine of angle\n");
              printf("9. Inverse of Tangent of angle\n");
              printf("10. Inverse of Cotangent of angle\n");
              printf("11. Inverse of Secant of angle\n");
              printf("12. Inverse of Cosecant of angle\n");

              printf("Enter the angle in degrees : ");
              scanf("%lf",&ang);
              rad=0.01745329*ang; //the angle is converted to radians as trigonometric functions in 'math.h' header file only works with radian measures
              printf("Choose a Function : ");//user chooses their required choice of operation
              scanf("%d", &T);

              printf("\n"); 
              line_break(st) //line break
              printf ("\n");
     
              switch(T)
              {
                 case 1 : tr=sin(rad); 
                          printf("Sine of the angle : %f", tr);
                          break;
                 case 2 : tr=cos(rad); 
                          printf("Cosine of the angle : %f", tr);
                          break;
                 case 3 : tr=tan(rad); 
                          printf("Tangent of the angle : %f", tr);
                          break;
                 case 4 : tr=1/tan(rad); 
                          printf("Cotangent of the angle : %f", tr); 
                          break;
                 case 5 : tr=1/cos(rad); 
                          printf("Secant of the angle : %f", tr);
                          break;
                 case 6 : tr=1/sin(rad); 
                          printf("Cosecant of the angle : %f", tr);
                          break;
                 case 7 : tr=asin(ang);
                          printf("Inverse of Sine of the angle : %lf", tr);
                          break;
                 case 8 : tr=acos(ang);
                          printf("Inverse of Cosine of the angle : %f", tr);
                          break;
                 case 9 : tr=atan(ang); 
                          printf("Inverse of Tangent of the angle : %f", tr);
                          break;
                 case 10: tr=1/atan(ang); 
                          printf("Inverse of Cotangent of the angle : %f", tr);
                          break;
                 case 11: tr=1/acos(ang);    
                          printf("Inverse of Secant of the angle : %f", tr);
                          break;
                 case 12: tr=1/asin(ang); 
                          printf("Inverse of Cosecant of the angle : %f", tr);
                          break;
                 default: printf("Invalid menu number");
                          break;
              }
     //End of Snith's and Affan's Part

     //Factorial //Niranjan's Part
     case 3 : printf("1. FACTORIAL\n");
              printf("2. PERMUTATION\n");
              printf("3. COMBINATION\n");
              printf("Choose a Function : ");
              scanf("%d",F);

              printf ("\n");
              line_break(st) //line break
              printf ("\n");
              
              switch(F)
              {
                 case 1 : printf("Enter the value of n : \n");
                          scanf("%d",&n);
                          result = factorial(n);
                          printf("Factorial = %d\n",result);
                          break;
                 case 2 : printf("Enter the value of n : \n");
                          scanf("%d",&n); 
                          printf("Enter the value of r : \n");
                          scanf("%d",&r);
                          result = permutations(n, r);
                          printf("Permutation = %d\n",result);
                          break;
                 case 3 : printf("Enter the value of n : \n");
                          scanf("%d",&n); 
                          printf("Enter the value of r : \n");
                          scanf("%d",&r);
                          result=combinations(n, r);
                          printf("Combination = %d\n",result);
                          break;
                 default: printf("Invalid Menu Number");
                          break;
              }
              break;
     //End of Niranjan's Part

     //Matrix Functions //Jensen and Raaj's Part
     case 4 : printf("Enter the size of the matrix A : ");
              scanf("%d%d", &m, &n);
              int a[m][n], b[m][n], c[m][n], tr[i][j];
              printf("\n");
              for(i=0; i<m; i++) //To read and display the values of the Matrix A
              {
                  for(j=0; j<n; j++)
                  {
                     printf("A[%d][%d] = ", i, j);
                     scanf("%d", &a[i][j]);
                  }
              }
              printf("\n");
              printf("Matrix A \n");
              for(i=0; i<m; i++)
              {
                  for(j=0; j<n; j++)
                  {
                     printf("%d\t", a[i][j]);
                  }
               
              printf ("\n");
              line_break(st); //line break
              printf ("\n");

              printf("1. ADDITION\n");
              printf("2. SUBTRACTION\n");
              printf("3. MULTIPLICATION\n");
              printf("4. TRACE\n");
              printf("5. TRANSPOSE\n");
              printf("6. SYMETRIC OR NOT\n");
              printf("7. NORM\n");
              printf("Choose an Operation : ");
              scanf("%d",M);
              if(0<M<4)
              {
                  for(i=0; i<m; i++) //To read and display the values of the Matrix B
                  {
                     for(j=0; j<n; j++)
                     {
                        printf("A[%d][%d] = ", i, j);
                        scanf("%d", &b[i][j]);
                     }
                  }
                  printf("\n");
                  printf("Matrix B \n");
                  for(i=0; i<m; i++)
                  {
                     for(j=0; j<n; j++)
                     {
                        printf("%d\t", b[i][j]);
                     }
                  }

              printf ("\n");
              line_break(st)//line break
              printf ("\n");

              switch(M)
              {
                 case 1 : printf("The sum of the matrices is :- \n");
                          for(i=0; i<m; i++)
                          {
                              for(j=0; j<n; j++)
                              {
                                 c[i][j] = a[i][j] + b[i][j];
                                 printf("%d\t", c[i][j]);
                              }
                              printf("\n");
                          }
                         break;
                 case 2 : printf("The difference of the matrices is :- \n");
                          for(i=0; i<m; i++)
                          {
                              for(j=0; j<n; j++)
                              {
                                 c[i][j] = a[i][j] - b[i][j];
                                 printf("%d\t", c[i][j]);
                              }
                              printf("\n");
                          }
                         break;
                 case 3 : printf("Enter the order of Matrix A and Matrix B : ");
                          scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
                          printf("\n");
                          if(c1==r2)
                          {
                              printf("The product of the matrices is :- \n");
                              for(i=0; i<r1; i++)
                              {
                                 for(j=0; j<c2; j++)
                                 {
                                    for(k=0; k<c1; k++)
                                    {
                                       c[i][j] += a[i][k] * b[k][j];
                                    }
                                    printf("%d\t", c[i][j]);
                                 }
                                 printf("\n");
                              }
                          }
                          else
                          {
                              printf("MATH ERROR!!");
                          }
                          break;
                 case 4 : for(i=0;i<m;i++)
                          {
                              sum = sum + a[i][i];
                          }
                          printf("\n");
                          printf("Trace of the matrix = %d",sum);
                          break;
                 case 5 : printf("The transpose of matrix A is :- \n");
                          for(i=0; i<m; i++)
                          {
                              for(j=0; j<n; j++)
                              {
                                 tr[i][j] = a[j][i];
                                 printf("%d\t", tr[i][j]);
                              }
                          printf("\n");
                          }
                          break;
                 case 6 : for(i=0; i<m; i++)
                          {
                              for(j=0; j<n; j++)
                              {
                                 tr[i][j] = a[j][i];
                                 printf("%d\t", tr[i][j]);
                              }
                          printf("\n");
                          }
                          if(tr[i][j] == a[j][i])
                          {
                              printf("MATRIX A is a Symmetric Matrix.");
                          }
                          else if(tr[i][j] == -(a[j][i]))
                          {
                              printf("MATRIX A is a Skew Symmetric Matrix.");
                          }
                          else
                          {
                              printf("MATRIX A is not a Symmetric Matrix.");
                          }
                          break;
                 case 7 : for(i=0;i<m;i++)
                          {
                              for(j=0;j<n;j++)
                              {
                                 d+=a[i][j]*a[i][j];
                              }
                          }
                          norm=sqrt(d);
                          printf("The norm of the matrix = %f",norm);
                          break;
                 default: printf("Invalid Menu Number");
                          break;        
              }
     //End of Jensen and Raaj's Part
     default: printf("Invalid Menu Number");
              break; 
   }
   
   return 0;
   
}
