#include <stdio.h>
int a,i,sum;
int perfect_num(int a){
    sum=0;
    for(i=1;i<a;i++){    
        if(a%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    printf("Find the perfect number:\n\r");
    //cin>>a;
    for(a=2;a<1000;a++){
        sum=perfect_num(a);       
    if(sum==a)   
        printf(" %d is the perfect number\n\r",sum);  
    }
}