#include <stdio.h>



int main (void)
{
    
int a=1,b,c,d,e,f=1;
a=e;
while(a%2!=0)
{
printf("%d\n\r",a);
a=a>>1;
c=c+a;
d++;
printf("%d\n\r",c);
}
for(d;d>0;d--)
{
f=f+1<<d;
printf("f value is %d",f);
}


}