#include <stdio.h>
int minus(int a,int c)
{printf("the value is %3d\n",a-c);}
int plus(int a,int c)
{printf("the value is %3d\n",a+c);}
int multiply(int a, int c) 
{ printf("the value is %3d\n",a*c);}
int divided(int a, int c) 
{ printf("the value is %6f\n",(float)a/c); }
int (* show_type_attributes(char type) )(int,int)
{ 
    int n[4];
    n['+'] = 0;
    n['-'] = 1;
    n['*'] = 2;
    n['/'] = 3;
   


    int (*pFun[4])(int,int) = {plus , minus ,multiply ,divided};

   if (type == '+')return *pFun[n['+']];
   else if (type == '-') return *pFun[n['-']];
   else if (type == '*') return *pFun[n['*']];       
   else if (type == '/') return *pFun[n['/']];
}
//main() function
int main()
{
    int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c); 
    int (*f)(int,int);  // Declare a pointer to a function with two paramete
    f = show_type_attributes(b); // f will take the return     
    f(a,c);  // Call function that was returned by show_car_attributes()
    return 0;
}
