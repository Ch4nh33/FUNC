#include<stdio.h>
#include<stdlib.h>
void * memmove(void* dest, const void *src, size_t num)
{
    size_t i = 0;
    unsigned char *buff = malloc(num);
    
    for(i = 0;i<num;++i)
      buff[i] = ((unsigned char*)src)[i];
    for (i = 0; i < num; i++)
     ((unsigned char*)dest)[i] = ((unsigned char*)buff)[i];
    free(buff);
    buff = NULL;
    
    return dest;
}
int main(void)
{
    char str[32] = "hello world";
    memmove(&str[6],&str[0],12);
    printf("%s",str);
    return 0;
}
