//Program for a Calculator (with basic functions and Matrix calculation)
#include <stdio.h>
#include <math.h>
void line_break(int);
int factorial(int);
int permutations(int,int);
int combinations(int,int);
void line_break(int st) //used for line break
{
   int star;
   for(star=32; star>0; star--)
   {
      printf("* * ");
   }
   printf("\n\n");
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
   int st;   //used for line breaks
   int A,B,M,F,T; //used for switches
   int num,a,m,n,r,sum=0,ro,co,rm,cm,r1,r2,c1,c2,result,i,j,k,z;
   int X[ro][co],Y[ro][co],BM[rm][cm],C[ro][co],tra[i][j];
   float x,y,c=0,d=1,e,norm;
   double ang,rad,con,tr; //ang is to be inputed by the user, rad is the radian value of the angle

   line_break(st); //line break

   //The Welcoming statement.
   printf("\nWelcome to the Basic Calculator by team 'Two_Rows_One_Column'.\n");
   printf("In this calculator, you can run programs like Basic Algebra, Trigonometric Functions, Factorial Functions and Matrix Functions.\n\n");

   printf("\n");
   line_break(st); //line break

   printf("1. BASIC FUNCTIONS\n");
   printf("2. TRIGONOMETRIC FUNCTIONS\n");
   printf("3. FACTORIAL\n");
   printf("4. MATRIX\n");
   printf("\nChoose a Function : ");
   scanf("%d",&A);

   printf ("\n");
   line_break(st); //line break
    
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
              line_break(st); //line break
               
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
                          printf("\nRemainder = %f",e);
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

              printf("\nChoose a Function : ");//user chooses their required choice of operation
              scanf("%d", &T); 
              //the angle is converted to radians as trigonometric functions in 'math.h' header file only works with radian measures

              printf("\n"); 
              line_break(st); //line break
     
              switch(T)
              {
                 case 1 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=sin(rad); 
                          printf("Sine of the angle : %f", tr);
                          break;
                 case 2 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=cos(rad); 
                          printf("Cosine of the angle : %f", tr);
                          break;
                 case 3 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=tan(rad); 
                          printf("Tangent of the angle : %f", tr);
                          break;
                 case 4 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/tan(rad); 
                          printf("Cotangent of the angle : %f", tr); 
                          break;
                 case 5 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/cos(rad); 
                          printf("Secant of the angle : %f", tr);
                          break;
                 case 6 : printf("\nEnter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/sin(rad); 
                          printf("Cosecant of the angle : %f", tr);
                          break;
                 case 7 : printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=asin(ang);
                          con=tr*57.296;
                          printf("Inverse of Sine of the angle : %lf", con);
                          break;
                 case 8 : printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=acos(ang);
                          con=tr*57.296;
                          printf("Inverse of Cosine of the angle : %f", con);
                          break;
                 case 9 : printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=atan(ang); 
                          con=tr*57.296;
                          printf("Inverse of Tangent of the angle : %f", con);
                          break;
                 case 10: printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=1/atan(ang); 
                          con=tr*57.296;
                          printf("Inverse of Cotangent of the angle : %f", con);
                          break;
                 case 11: printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=1/acos(ang);    
                          con=tr*57.296;
                          printf("Inverse of Secant of the angle : %f", con);
                          break;
                 case 12: printf("\nEnter the value: ");
                          scanf("%lf",&ang);
                          tr=1/asin(ang); 
                          con=tr*57.296;
                          printf("Inverse of Cosecant of the angle : %f", con);
                          break;
                 default: printf("Invalid menu number");
                          break;
              }
              break;
     //End of Snith's and Affan's Part

     //Factorial //Niranjan's Part
     case 3 : printf("1. FACTORIAL\n");
              printf("2. PERMUTATION\n");
              printf("3. COMBINATION\n");
              printf("\nChoose a Function : ");
              scanf("%d",&F);

              printf ("\n");
              line_break(st); //line break
              
              switch(F)
              {
                 case 1 : printf("Enter a number : ");
                          scanf("%d",&n);
                          result = factorial(n);
                          printf("Factorial of %d = %d",n,result);
                          break;
                 case 2 : printf("Enter the value of n : ");
                          scanf("%d",&n); 
                          printf("\nEnter the value of r : ");
                          scanf("%d",&r);
                          result = permutations(n, r);
                          printf("Permutation = %d",result);
                          break;
                 case 3 : printf("Enter the value of n : ");
                          scanf("%d",&n); 
                          printf("\nEnter the value of r : ");
                          scanf("%d",&r);
                          result=combinations(n, r);
                          printf("Combination = %d",result);
                          break;
                 default: printf("Invalid Menu Number");
                          break;
              }
              break;
     //End of Niranjan's Part

     //Matrix Functions //Jensen and Raaj's Part
     case 4 : printf("Enter the size of the matrix A : ");
              scanf("%d%d", &ro,&co);
              printf("\n");
              printf("Enter the values of the matrix A");
              printf("\n");
              for(i=0; i<ro; i++) //To read and display the values of the Matrix A
              {
                  for(j=0; j<co; j++)
                  {
                     printf("A[%d][%d] = ", i, j);
                     scanf("%d", &X[i][j] );
                  }
              }
              printf("\n");
              printf("Matrix A \n");
              for(i=0; i<ro; i++)
              {
                  for(j=0; j<co; j++)
                  {
                     printf("%d\t", X[i][j]);
                  }
                  printf ("\n");
          	  }
               
              printf ("\n");
              line_break(st); //line break

              printf("1. ADDITION\n");
              printf("2. SUBTRACTION\n");
              printf("3. MULTIPLICATION\n");
              printf("4. TRACE\n");
              printf("5. TRANSPOSE\n");
              printf("6. SYMMETRIC OR NOT\n");
              printf("7. NORM\n");
              printf("\nChoose an Operation : ");
              scanf("%d",&M);
              
              printf ("\n");
              line_break(st); //line break
              
              if(0<M<3)
              {
                  printf("Enter the values of the matrix B");
                  printf("\n");
                  for(i=0; i<ro; i++) //To read and display the values of the Matrix B
	               {
	                  for(j=0; j<co; j++)
	                  {
	                     printf("B[%d][%d] = ", i, j);
	                     scanf("%d", &Y[i][j] );
	                  }
	               }
	               printf("\n");
	               printf("Matrix B \n");
	               for(i=0; i<ro; i++)
	               {
	                  for(j=0; j<co; j++)
	                  {
	                     printf("%d\t", Y[i][j]);
	                  }
	                  printf ("\n");
	          	   }
              }
              printf ("\n");
              switch(M)
              {
                 case 1 : printf("The sum of the matrices is :- \n");
                          for(i=0; i<ro; i++)
                          {
                              for(j=0; j<co; j++)
                              {
                                 C[i][j] = X[i][j] + Y[i][j];
                                 printf("%d\t", C[i][j]);
                              }
                              printf("\n");
                          }
                         break;
                 case 2 : printf("The difference of the matrices is :- \n");
                          for(i=0; i<ro; i++)
                          {
                              for(j=0; j<co; j++)
                              {
                                 C[i][j] = X[i][j] - Y[i][j];
                                 printf("%d\t", C[i][j]);
                              }
                              printf("\n");
                          }
                         break;
                 case 3 : printf("Enter the size of the matrix B : ");
                          scanf("%d%d", &rm,&cm);
                          printf("\n");           
                          printf("Enter the values of the matrix B");
                          printf("\n");
                          for(i=0; i<rm; i++) //To read and display the values of the Matrix B for Multiplication
                          {
                             for(j=0; j<cm; j++)
                             {
                                printf("B[%d][%d] = ", i, j);
                                scanf("%d", &BM[i][j] );
                             }
                          }
                          printf("\n");
                          printf("Matrix B \n");
                          for(i=0; i<rm; i++)
                          {
                             for(j=0; j<cm; j++)
                             {
                                printf("%d\t", BM[i][j]);
                             }
                             printf ("\n");
                          }
                          printf("Enter the order of Matrix A and Matrix B : ");
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
                                       C[i][j] += X[i][k] * BM[k][j];
                                    }
                                    printf("%d\t", C[i][j]);
                                 }
                                 printf("\n");
                              }
                          }
                          else
                          {
                              printf("MATH ERROR!!");
                          }
                          break;
                 case 4 : for(i=0;i<ro;i++)
                          {
                              sum = sum + X[i][i];
                          }
                          printf("\n");
                          printf("Trace of the matrix = %d",sum);
                          break;
                 case 5 : printf("The transpose of matrix A is :- \n");
                          for(i=0; i<ro; i++)
                          {
                              for(j=0; j<co; j++)
                              {
                                 tra[i][j] = X[j][i];
                                 printf("%d\t", tra[i][j]);
                              }
                          printf("\n");
                          }
                          break;
                 case 6 : for(i=0; i<ro; i++)
                          {
                              for(j=0; j<co; j++)
                              {
                                 tra[i][j] = X[j][i];
                                 printf("%d\t", tra[i][j]);
                              }
                          printf("\n");
                          }
                          if(tra[i][j] == X[j][i])
                          {
                              printf("MATRIX A is a Symmetric Matrix.");
                          }
                          else if(tra[i][j] == -(X[j][i]))
                          {
                              printf("MATRIX A is a Skew Symmetric Matrix.");
                          }
                          else
                          {
                              printf("MATRIX A is not a Symmetric Matrix.");
                          }
                          break;
                 case 7 : for(i=0;i<ro;i++)
                          {
                              for(j=0;j<co;j++)
                              {
                                 d+=X[i][j]*X[i][j];
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