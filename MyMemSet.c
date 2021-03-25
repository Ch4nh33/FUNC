#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * memset(void* ptr, int value, size_t num)
{
    size_t i =0;
    for(i=0;i<num;i++)
    {
        *((unsigned char*)ptr+i) = (unsigned char)value;
    }

    return ptr;
}
int main(void)
{
    int arr[12];
    memset(arr,1,12*sizeof(int));

    for (size_t i = 0; i < 12; i++)
    {
        printf("%d\n",arr[i]);   
    }
    return 0;
}
