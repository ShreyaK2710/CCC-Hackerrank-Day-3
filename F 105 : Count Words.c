#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];
    int i,words=0;
 
    //printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
        if(s[i]==32)
         words++;
 
     }
     if(i>0)
      words++;



    printf("%d",words);

    return 0;
}
