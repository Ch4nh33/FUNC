#include <stdio.h> 

int *strcmp(const char *str1, const char *str2); //string compare

int main(void)
{ 
    char buf[10] = "abc"; //same return 0; 
    char *string = "abc"; // if first string is bigger than second string for ASCII , return 1;
                          // if second string is bigger than first string for ASCII , return -1;
    int result2 = 0;

    result2 = strcmp(buf,string);
    printf("%d\n",result2);
    
    return 0; 
}

int *strcmp(const char *str1, const char *str2)
{
    int result = 0;
    size_t i =0;

    while (str1[i]==str2[i] && str1[i] != '\0' && str2[i] != '\0')
        {++i;}
    if(str1[i]>str2[i])
        {result = 1;}
    if(str1[i]<str2[i])
        {result = -1;}
    return result;
}
