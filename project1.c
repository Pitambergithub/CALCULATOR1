#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "Enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();


int main()
{
  printf("\t\t Welcome to the Scientific calculator\n\n");
  int choice;
  printf("\n------ press 0 to quite the program ------\n");
  printf("Enter 1 for Addition \n");
  printf("Enter 2 for Subtraction \n");
  printf("Enter 3 for Multiplication \n");
  printf("Enter 4 for Division \n");
  printf("Enter 5 for Modulus \n");
  printf("Enter 6 for Power\n");
  printf("Enter 7 for Factorial\n");
  printf("Enter 8 for Square \n");
  printf("Enter 9 for Cube \n");
  printf("Enter 10 for Squareroot \n");
  
  while(1)
  {
    printf("\n\nEnter the operation you want to do: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        addition();
        break;
       case 2:
        subtraction();
        break;
       case 3:
        multiplication();
        break;
       case 4:
        division();
        break;
       case 5:
        modulus();
        break;
       case 6:
        power();
        break;
       case 7:
        factorial();
        break;
       case 8:
        square();
        break;
       case 9:
        cube();
        break;
       case  10:
        squareroot();
        break;
       case 0:
        exit (0);
       default:
        printf("%s",note); 

    }

  }
  return 0;
           

}
void addition()
{
  printf("Enter the number you want to add: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The sum of a and b is %d\n",a+b);
}
void subtraction()
{
  printf("Enter the number you want to sub: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The sum of a and b is %d\n",a-b);
}

void multiplication()
{
  printf("Enter the number you want to mul: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The sum of a and b is %d\n",a*b);
}

void division()
{
  printf("Enter the number you want to div: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The sum of a and b is %f\n",(float)a/(float)b);
}

void modulus()
{
  printf("Enter the number you want to mod: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("The sum of a and b is %d\n",a%b);
}

void power()
{
  double b;
  double p;
  printf("Enter the base and the power: ");
  scanf("%1f%1f",&b,&p);
  double e=pow(b,p);
  
  printf("The power is %1f",e);
}

void factorial()
{
  
  int n,factorial;
  printf("Enter the number you want to factorial of: ");
  scanf("%d",&n);
  factorial=1;
  for(int i=1;i<=n;i++)
  {
    factorial=factorial*i;
  }
  printf("\nfactorial of %d is %d",n,factorial);
}

void square()
{
  double b;
  printf("Enter the number you want to the square of: ");
  
  scanf("%1f",&b);
  double p=pow(b,2);
  printf("The square of  %1f is %1f\n",b,p);
}

void cube()
{
  double b;
  printf("Enter the number you want to cube of: ");
  
  scanf("%1f",&b);
  double p=pow(b,3);
  printf("The cube of %1f is %1f\n",b,p);
}

void squareroot()
{
  double b;
  printf("Enter the number you want to square root of: ");
  
  scanf("%1f",&b);
  double s=sqrt(b);
  printf("The square root of  %1f if %1f\n",b,s);
}

