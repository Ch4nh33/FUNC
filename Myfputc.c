#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  FILE *fp = fopen("text.txt","w");
  if(fp != NULL)
  {
    int ret = 0;
    ret = fputc('a',fp);
    
    if (ret == EOF) //end of file
      printf("error");
    fclose(fp);
  }
    return 0;
}
