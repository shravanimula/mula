#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char s1[50],s2[30],*p;
        printf("enter a string1\n");
        gets(s1);
        printf("enter astring2\n");
        gets(s2);
        if(strcmp(s1,s2)==0)
                printf("both strings equal\n");
        else if(strcmp(s1,s2)>0)
                printf("s1 is greater than s2\n");
        else if(strcmp(s1,s2)<0)
                printf("s1 is less than s2\n");
}                                  
