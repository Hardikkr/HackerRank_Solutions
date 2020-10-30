#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a;
    char b[100], c[100];
    scanf("%c", &a);
    scanf("%s\n", &b);
    scanf("%[^\n]%*c", &c);
    printf("%c\n%s\n%s", a, b, c);
    return 0;
}
