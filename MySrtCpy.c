#include <stdio.h> 
#include <string.h>

char *strcpy(char *dest, const char *src); //string concatenation

int main(void)
{ 
    char *stirng = "hello";
    
    strcpy(buf,stirng);
    printf("%s",buf);
    
    return 0; 
}

char *strcpy(char *dest, const char *src)
{
    size_t i =0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return dest;
}   
