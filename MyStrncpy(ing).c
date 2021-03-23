#include <stdio.h>
char * strcnpy(char *destination, const char *source, size_t num)
{
    size_t i = 0;
    for ( i = 0; i < num; ++i)
    {
        destination[i] == source[i];
        if(source[i]=='\0')
            break;
    }
    
    return destination;
}
int main(void)
{
    char str[8] = {'\0'}; 
    char *hello = "hello";
    strcnpy(str,hello,7); //protect overflow 
    
    printf("%s",str);

    return 0;
}
