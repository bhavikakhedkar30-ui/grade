#include<stdio.h>
int main()

{

    for ( int i=0;i<4;i++){
        for (int p=0;p<=i;p++){
            printf("*");
        }
        for (int j=3;j>i;j--)
        {
            printf(" ");
        }
        for (int k=3;k>=i;k--){
            printf(" ");
        }
        for (int p=0;p<=i;p++)
        {
            printf("*");
        }printf("\n");
    
        
    }
    for(int s=0;s<4;s++){
        for (int a=4;a>s;a--){
            printf("*");
        }
        for (int b=0;b<=s;b++){
            printf(" ");
        }
        for (int c=4; c>s; c--){
            printf("*");
        }
        printf("\n");
    }



}