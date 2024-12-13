#include <stdio.h>
#include <string.h>

int i = 0;

void func(char s[])
{

    int length = strlen(s);

    if (i - length == 0)
        return;

    putchar(s[length - i - 1]);

    i++;

    func(s);
}

int main()
{

    func("Assalomu alaykum");

    return 0;
}