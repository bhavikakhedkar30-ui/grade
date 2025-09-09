#include<stdio.h>
int main(){
    int i;
    int n =12;
    int isprime=1;


        if (i<=1){
    printf("not prime");
    return 0;
        }
        for (int i=2;i<n;i++);
        if(n%i==0){
            isprime=0;

        }
        if(isprime)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
        
    

}
