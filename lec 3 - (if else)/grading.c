#include <stdio.h>

int main()
{
//int a = 5;
     //int b = 3;
    // int sum = a++ + ++b + --b + ++a;
    // printf("%d",sum);
    // int a=3;
   int a = 63;
    int m = 89;

    if (a <= 75 && m > 90)
    {
     printf("A+");
    }
   else if (a < 75 && m > 80 && m < 90)
   {

    printf("A");
    }
    else if (a < 70 && m > 70 && m < 90)
    {
       printf("B+");
   }
    else if (a < 60 && m > 60 && m < 80)
    {
        printf("B");
    }
    else if (a < 50 && m > 50 && m < 70)
    {
        printf("C+");
   }
   else if (a < 40 && m > 50 && m < 60)
    {
        printf("C");
    }
    else if (a < 30 && m > 40 && m < 50)
   {
        printf("D");
 }
    else 
        {
        printf("fail");
        }
}
