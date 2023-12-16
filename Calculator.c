//Program for a Calculator (with basic functions and Matrix calculation)
#include <stdio.h>
#include <math.h>
int fact(int);
int CP(int);
int main()
{
   int star;   //used for line breaks
   int A,B,M,T; //used for switches
   int num,a,n,r,per,comb,f,i,z;
   float x,y,c=0,d=1,e;
   double ang,rad; //ang is to be inputed by the user, rad is the radian value of the angle

   for (star=32; star > 0; star--) //line break
   {
       printf ("* * ");
   }
   printf ("\n");

   //The Welcoming statement.
   printf("\nWelcome to the Basic Calculator by team 'Two_Rows_One_Column'.\n");
   printf("In this calculator, you can run programs like Basic Algebra, Trignometric Functions, Factorial Functions and Matrix Functions.\n\n");

   for (star=32; star > 0; star--) //line break
   {
       printf ("* * ");
   }
   printf ("\n\n");

   printf("1. BASIC FUNCTIONS\n");
   printf("2. TRIGONOMETRIC FUNCTIONS\n");
   printf("3. FACTORIAL\n");
   printf("4. MATRIX\n");
   printf("\nChoose a Function : ");
   scanf("%d",&A);

   printf ("\n");
   for (star=32; star > 0; star--) //line break
   {
      printf ("* * ");
   }
   printf ("\n\n");
    
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
              printf("\nChoose an Operation : ");
              scanf("%d",&B);
               
              printf ("\n");
              for (star=32; star > 0; star--) //line break
              {
                 printf ("* * ");
              }
              printf ("\n\n");
               
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
                          printf("Quotient = %f",c);
                          break;
                 case 5 : printf("Enter the Divident and Divisor: \n");
                          scanf("%f%f",&x,&y);
                          e=fmod(x,y);
                          printf("Remainder = %f",e);
                          break;
                 case 6 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x;
                          printf("Square of %f = %f",x,c);
                          break;
                 case 7 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("Square Root of %f = %f",x,sqrt(x));
                          break;
                 case 8 : printf("Enter a number : ");
                          scanf("%f",&x);
                          c=x*x*x;
                          printf("Cube of %f = %f",x,c);
                          break;
                 case 9 : printf("Enter a number : ");
                          scanf("%f",&x);
                          printf("Cube Root of %f = %f",x,cbrt(x));
                          break;
                 case 10 : printf("Enter a number : ");
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
                 default : printf("Invalid Menu Number");
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

              //inputting angle from user
              printf("Enter the angle in degrees: ");
              scanf("%lf", &ang);
              rad=0.01745329*ang; 
              //the angle is converted to radians as trigonometric and inverse trigonometric functions in 'math.h' header file only works with radian measures
              
              //user chooses their required choice of operation
              printf("\nChoose any function: ");
              scanf("%d", &T);

              printf("\n");
              //line break
              for (star=32; star > 0; star--) 
              {
                 printf ("* * ");
              }
              printf ("\n\n");
     
              switch(T)
              {
                 case 1 : 
                          break;
                 case 2 : 
                          break;
                 default : printf("Invalid Menu Number");
                           break;
              }
     //End of Snith's and Affan's Part

     //Factorial //Niranjan's Part
     case 3 : printf("1. FACTORIAL\n");
              printf("2. PERMUTATION\n");
              printf("3. COMBINATION\n");
              printf("Enter an Operation : ");
              scanf("%d",M);

              printf ("\n");
              for (star=32; star > 0; star--) //line break
              {
                 printf ("* * ");
              }
              printf ("\n\n");
              
              switch(M)
              {
                 case 1 : printf("Enter the number:");
                          scanf("%d",&num);
                          a=fact(n);
                          printf("Factorial of the given number=%d",a);
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
                 case 3 : 
                 default : printf("Invalid Menu Number");
                           break;
              }
     //End of Niranjan's Part

     //Matrix Functions //Jensen and Raaj's Part
     case 4 : 

        
              printf ("\n");
              for (star=32; star > 0; star--) //line break
              {
                 printf ("* * ");
              }
              printf ("\n\n");

              switch()
              {

              }
     //End of Jensen and Raaj's Part
     default : printf("Invalid Menu Number");
               break; 
   }
   
   return 0;
   
}