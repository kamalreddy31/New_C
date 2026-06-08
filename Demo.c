#include <stdio.h>
int add (int a,int b)
{
    return a+b;
}
int main()
{
    printf("%d",add(10,20));
    printf("Hello From main Branch");
    printf("Hello From Feature-2 Branch");
    return 0;
}