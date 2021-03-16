#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[255] = "abcdefg";
  printf("%d\n",MyStrlen(str));
  return 0;
}

unsigned int MyStrlen(const char*str)
{
  unsigned int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}
