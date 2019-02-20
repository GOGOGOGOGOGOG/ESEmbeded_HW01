#include <stdio.h>


int minus(int a,int c)
{
   printf("the value is %3d",a-c);
}


int plus(int a,int c)
{
     printf("the value is %3d",a+c);
}
int multiply(int a, int c) 
{ 
   
    printf("the value is %3d",a*c); 
}
int divided(int a, int c) 
{
	
    
     printf("the value is %3f",(float)a/c); 
}



/* Our principal function. Takes two parameters, returns a function. */
int (* show_type_attributes(char color) )(int,int)
{
   

  
    if (color == '+')
        return plus;
   if (color == '-')
        return minus;
   if (color == '*')
        return multiply;       
   if (color == '/')
        return divided;

}
//main() function
int main()
{
    int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
   
    int (*f)(int,int);  // Declare a pointer to a function with one parameter (int)

    f = show_type_attributes(b); // f will take the return          
    f(a,c);  
    return 0;
}