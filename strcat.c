*strcat*/
#include<stdio.h>
#include<string.h>
char *mystrcat(char *d,const char *s)
{
        int n=0,i=0;
        while(d[n])
                n++;
        for(i=0;s[i];i++)
                d[n+i]=s[i];
        d[n+i]='\0';
        return d;
}
int main()
{
        char s1[20],s2[20];
        printf("enter a string1\n");
        gets(s1);
        printf("enter astring2\n");
        gets(s2);
        printf("s1=%s s2=%s\n",s1,s2);
        mystrcat(s1,s2);
        printf("s1=%s s2=%s\n",s1,s2);
}
