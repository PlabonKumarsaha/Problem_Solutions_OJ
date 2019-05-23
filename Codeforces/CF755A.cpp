#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
    if(n==1)
    {
    printf("3\n");
    continue;
    }
    if(n==2)
    {
    printf("4\n");
        continue;}
    if(n%2==1)
    {
        printf("1\n");
    }
    else
    printf("%d\n",n-2);
}
}