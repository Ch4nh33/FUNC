#include <stdio.h> 
#include <string.h>

char *strcat(char *dest, const char *src); //string concatenation

int main(void)
{ 
    char buf[10] = "abc";
    char *string = "def";
    
    strcat(buf,string);
    printf("%s",buf);
    
    return 0; 
}

char *strcat(char *dest, const char *src)
{
    size_t i =0;
    size_t j = 0;
    while(dest[i] != '\0')
        ++i;
    
    while(src[j] != '\0'){
        dest[i] = src[j];
        ++i;
        ++j;
    }
    dest[i]  = '\0';
    return dest;
} 
