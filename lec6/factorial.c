#include<stdio.h>
int main() {
    int i , n;
    int ans = 1;
    printf("number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        ans= ans*i;
        printf("%d\n",ans);
    }
    printf("Answer=%d \n",ans);

    
}