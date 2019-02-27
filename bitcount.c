#include <stdio.h>
#include <stdbool.h>
int b=0;
bool getBit(int n, int index) {
   int a;
   a= n&(1<<index);
   if (a>0){
       b++;
   }
    return (a > 0); 
}
int main (void)
{
int num ,i;
scanf("%i",&num);
for(i=31;i>=0;i--){
  printf("%d", getBit(num,i));
}
printf("\n\rb is %d\n\r",b);



}