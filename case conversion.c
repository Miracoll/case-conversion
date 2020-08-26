#include <stdio.h>

int main()
{
    char str;
    char s,b;
    printf("Enter the character\n");
    scanf("%c",&str);

    s=str+32;
    b=str-32;

    if(str>=65 && str<=90)
        printf("%c",s);
    if(str>=96 && str<=122)
        printf("%c",b);
    return 0;
}
