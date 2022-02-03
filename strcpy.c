/*strcpy*/ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *mystrcpy(char *dest,const char *src)
{
        int i=0;
        for(i=0;src[i]!='\0';i++)
                dest[i]=src[i];
        dest[i]='\0';
        return dest;
}
int main()
{
        char s1[20],s2[20];
	printf("enter astring1\n");
        gets(s1);
	printf("enter astring2\n");
        gets(s2);
        printf("s1=%s\ns2=%s\n",s1,s2);
        mystrcpy(s2,s1);
        printf("s1=%ss2=%s\n",s1,s2);    
}
