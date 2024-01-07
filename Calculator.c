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
   int num,a,m,n,r,sum=0,ro,co,rm,cm,r1,r2,c1,c2,result,i,j,k,w=1,z;
   int X[50][50],Y[50][50],BM[50][50],C[50][50],tra[50][50];
   float x,y,c=0,d=1,e,norm;
   double ang,rad,con,tr; //ang is to be inputed by the user, rad is the radian value of the angle

   line_break(st); //line break

   //The Welcoming statement.
   printf("\nWelcome to the Basic Calculator by team 'Two_Rows_One_Column'.\n");
   printf("In this calculator, you can run programs like Basic Algebra, Trigonometric Functions, Factorial Functions and Matrix Functions.\n\n");

   while(w!=0)
   {
   
   printf("\n");
   line_break(st); //line break

   printf("1. BASIC FUNCTIONS\n");
   printf("2. TRIGONOMETRIC FUNCTIONS\n");
   printf("3. FACTORIAL\n");
   printf("4. MATRIX\n");
   printf("\nChoose a Function : ");
   scanf("%d",&A);

   printf("\n");
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
               
              printf("\n");
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
                          printf("\nSum = %f",c);
                          break;
                 case 2 : printf("Enter two numbers : \n");
                          scanf("%f\n%f",&x,&y);
                          c=x-y;
                          printf("\nDifference of %f and %f = %f",x,y,c);
                          break;
                 case 3 : printf("How many numbers do you want to multiply ?\n");
                          scanf("%d",&z);
                          printf("Enter the numbers : \n");
                          for(i=1; i<=z; i++)
                          {
                              scanf("%f",&x);
                              d=d*x;
                          }
                          printf("\nProduct = %f",d);
                          break;
                 case 4 : printf("Enter the Divident and Divisor : \n");
                          scanf("%f%f",&x,&y);
                          c=x/y;
                          e=fmod(x,y);
                          printf("\nQuotient = %f",c);
                          printf("\nRemainder = %f",e);
                          break;
                 case 5 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x;
                          printf("\nSquare of %f = %f",x,c);
                          break;
                 case 6 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("\nSquare Root of %f = %f",x,sqrt(x));
                          break;
                 case 7 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x*x;
                          printf("\nCube of %f = %f",x,c);
                          break;
                 case 8 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("\nCube Root of %f = %f",x,cbrt(x));
                          break;
                 case 9 : printf("Enter a number : ");
                          scanf("%f",&x);
                          if(x==0)
                          {
                              printf("\nMATH ERROR!\n");
                              printf("Please enter a number other than zero\n");
                          }
                          else
                          {
                              c=1/x;
                              printf("\nReciprocal of %f = %f",x,c);
                          }
                          break;
                 case 10: printf("Enter the base : ");
                          scanf("%f",&x);
                          printf("\nEnter the exponent : ");
                          scanf("%f",&y);
                          printf("\n%f^%f = %f",x,y,pow(x,y));
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
                 case 1 : printf("Enter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=sin(rad); 
                          printf("\nSine of the angle : %f", tr);
                          break;
                 case 2 : printf("Enter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=cos(rad); 
                          printf("\nCosine of the angle : %f", tr);
                          break;
                 case 3 : printf("Enter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=tan(rad); 
                          printf("\nTangent of the angle : %f", tr);
                          break;
                 case 4 : printf("Enter the angle: ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/tan(rad); 
                          printf("\nCotangent of the angle : %f", tr); 
                          break;
                 case 5 : printf("Enter the angle : ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/cos(rad); 
                          printf("\nSecant of the angle : %f", tr);
                          break;
                 case 6 : printf("Enter the angle : ");
                          scanf("%lf",&ang);
                          rad=0.01745329*ang;
                          tr=1/sin(rad); 
                          printf("\nCosecant of the angle : %f", tr);
                          break;
                 case 7 : printf("Enter the value : ");
                          scanf("%lf",&ang);
                          tr=asin(ang);
                          con=tr*57.296;
                          printf("\nInverse of Sine of the angle : %lf", con);
                          break;
                 case 8 : printf("\nEnter the value : ");
                          scanf("%lf",&ang);
                          tr=acos(ang);
                          con=tr*57.296;
                          printf("Inverse of Cosine of the angle : %f", con);
                          break;
                 case 9 : printf("Enter the value : ");
                          scanf("%lf",&ang);
                          tr=atan(ang); 
                          con=tr*57.296;
                          printf("\nInverse of Tangent of the angle : %f", con);
                          break;
                 case 10: printf("Enter the value : ");
                          scanf("%lf",&ang);
                          tr=1/atan(ang); 
                          con=tr*57.296;
                          printf("\nInverse of Cotangent of the angle : %f", con);
                          break;
                 case 11: printf("Enter the value : ");
                          scanf("%lf",&ang);
                          tr=1/acos(ang);    
                          con=tr*57.296;
                          printf("\nInverse of Secant of the angle : %f", con);
                          break;
                 case 12: printf("Enter the value : ");
                          scanf("%lf",&ang);
                          tr=1/asin(ang); 
                          con=tr*57.296;
                          printf("\nInverse of Cosecant of the angle : %f", con);
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

              printf("\n");
              line_break(st); //line break
              
              switch(F)
              {
                 case 1 : printf("Enter a number : ");
                          scanf("%d",&n);
                          result = factorial(n);
                          printf("\nFactorial of %d = %d",n,result);
                          break;
                 case 2 : printf("Enter the value of n : ");
                          scanf("%d",&n); 
                          printf("\nEnter the value of r : ");
                          scanf("%d",&r);
                          if(r>n)
                          printf("\nMATH ERROR!");
                          else
                          {
                          result = permutations(n, r);
                          printf("\nPermutation = %d",result);
                          }
                          break;
                 case 3 : printf("Enter the value of n : ");
                          scanf("%d",&n); 
                          printf("\nEnter the value of r : ");
                          scanf("%d",&r);
                          if(r>n)
                          printf("\nMATH ERROR!");
                          else
                          {
                          result=combinations(n, r);
                          printf("\nCombination = %d",result);
                          }
                          break;
                 default: printf("Invalid Menu Number");
                          break;
              }
              break;
     //End of Niranjan's Part

     //Matrix Functions //Jensen and Raaj's Part
     case 4 : printf("Enter the size of the matrix A : ");
              scanf("%d%d", &ro,&co);
              printf("\nEnter the values of the matrix A\n\n");
              for(i=0; i<ro; i++) //To read and display the values of the Matrix A
              {
                  for(j=0; j<co; j++)
                  {
                     printf("A[%d][%d] = ", i, j);
                     scanf("%d", &X[i][j] );
                  }
              }
              printf("\nMatrix A\n\n");
              for(i=0; i<ro; i++)
              {
                  for(j=0; j<co; j++)
                  {
                     printf("%d\t", X[i][j]);
                  }
                  printf("\n");
          	  }
               
              printf("\n");
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
              
              printf("\n");
              line_break(st); //line break
              
              if(M==1 || M==2)
              {
                  printf("Enter the values of the matrix B\n\n");
                  for(i=0; i<ro; i++) //To read and display the values of the Matrix B
	               {
	                  for(j=0; j<co; j++)
	                  {
	                     printf("B[%d][%d] = ", i, j);
	                     scanf("%d", &Y[i][j] );
	                  }
	               }
	               printf("\nMatrix B\n\n");
	               for(i=0; i<ro; i++)
	               {
	                  for(j=0; j<co; j++)
	                  {
	                     printf("%d\t", Y[i][j]);
	                  }
	                  printf("\n");
	          	   }
              }
              switch(M)
              {
                 case 1 : printf("\nThe sum of the matrices is :- \n\n");
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
                 case 2 : printf("\nThe difference of the matrices is :- \n\n");
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
                          if(ro==rm && co==cm)
                          {
                              printf("\n");
                              printf("\nEnter the values of the matrix B\n\n");
                              for(i=0; i<rm; i++) //To read and display the values of the Matrix B for Multiplication
                              {
                                 for(j=0; j<cm; j++)
                                 {
                                    printf("B[%d][%d] = ", i, j);
                                    scanf("%d", &BM[i][j] );
                                 }
                              }
                              printf("\nMatrix B\n\n");
                              for(i=0; i<rm; i++)
                              {
                                 for(j=0; j<cm; j++)
                                 {
                                    printf("%d\t", BM[i][j]);
                                 }
                                 printf("\n");
                              }
                              printf("\nThe product of the matrices is :- \n\n");
                              for(i=0; i<ro; i++)
                              {
                                 for(j=0; j<cm; j++)
                                 {
                                    for(k=0; k<co; k++)
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
                              printf("\nMultiplication not possible");
                              printf("\n\nMATH ERROR!!");
                          }
                          break;
                 case 4 : if(ro!=co)
                          {
                              printf("Error : Matrix A is not a Square Matrix");
                              break;
                          }
                          else
                          {     
                              for(i=0;i<ro;i++)
                              {
                                    sum = sum + X[i][i];
                              }
                              printf("Trace of the matrix = %d",sum);
                          }
                          break;
                 case 5 : printf("The transpose of matrix A is :- \n\n");
                          for(j=0; j<co; j++)
                          {
                              for(i=0; i<ro; i++)
                              {
                                 tra[i][j] = X[i][j];
                                 printf("%d\t", tra[i][j]);
                              }
                          printf("\n");
                          }
                          break;
                 case 6 : if(ro!=co)
                          {
                              printf("Error : Matrix A is not a Square Matrix");
                              break;
                          }
                          else
                          {
                          for(j=0; j<co; j++)
                          {
                              for(i=0; i<ro; i++)
                              {
                                 tra[i][j] = X[i][j];
                                 printf("%d\t", tra[i][j]);
                              }
                          printf("\n");
                          }
                          if(tra[i][j] == X[i][j])
                          {
                              printf("\nMATRIX A is a Symmetric Matrix.");
                          }
                          else if(tra[i][j] == -(X[i][j]))
                          {
                              printf("\nMATRIX A is a Skew Symmetric Matrix.");
                          }
                          else
                          {
                              printf("\nMATRIX A is not a Symmetric Matrix.");
                          }
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
              break;
     //End of Jensen and Raaj's Part
     
     default: printf("Invalid Menu Number");
              break; 
   }

   printf ("\n\n");
   line_break(st); //line break

   printf("Press 1 to Continue || Press any other number to Exit : ");
   scanf("%d",&w);
   if(w!=1)
   {
      printf("\n\n************\n");
      printf("* Thankyou *\n");
      printf("************");
      break;
      printf("\n");
   }
   }
   
return 0;
  
}