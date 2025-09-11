#include<stdio.h>
int sum(){
    int a=10;
    int b=20;
    int c=a+b;
    return c;
}
int main(){
    int data= sum();
    printf("%d",data);
}