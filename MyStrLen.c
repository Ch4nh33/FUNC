#include <stdio.h> 
#include <string.h>

size_t strlen(const char *str);

int main(void)
{ 
    char buf[10] ="hello";
    size_t len =0;
    len = strlen(buf);
    printf("len = %d",len);
    return 0; 
}

size_t strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
    {
        ++len;
    }
    return len;
}
