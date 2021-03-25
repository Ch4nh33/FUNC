#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * memcpy(void* dest, const void *src, size_t num)
{
    size_t i = 0;

    for(i = 0;i<num;i++)
      ((unsigned char*)dest)[i] = ((unsigned char*)src)[i] ;
    
    return dest;
}
int main(void)
{
    int a = 0x123456;
    int b = 0;
    
    memcpy(&b,&a,2);

    printf("%d",b);
    
    return 0;
}
