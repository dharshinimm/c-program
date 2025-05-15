#include<stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if((c>='A')&&(c<='z'))printf("uppercase");
    else if((c>='a')&&(c<='z'))printf("lowercase");
    return 0;
}
