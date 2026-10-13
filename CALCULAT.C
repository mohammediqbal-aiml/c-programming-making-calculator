#include<stdio.h>
int main()
{
    char op; float a,b;
    printf("Enter expression (e.g. 5+3):");
    scanf("%f %c %f",&a,&op,&b);
    switch (op)
    {
       case '+': printf("=%.2f\n",a+b);break;
       case '-': printf("=%.2f\n",a-b);break;
       case '*': printf("=%.2f\n",a*b);break;
       case '/':
	  if (b!=0) printf("=%2f\n",a/b);
	  else      printf("Division by zero!\n");
	  break;
      default: printf("Invalid operation\n");
    }
    return 0;
}