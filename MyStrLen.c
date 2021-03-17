#include <stdio.h> 

size_t strlen(const char *str); //string length

int main(void)
{ 
    char buf[10] ={0, };
    fgets(buf,10,stdin);
    size_t len =0;
    len = strlen(buf);
    printf("len = %d",len -1);
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
