#include<stdio.h>
#include<conio.h>
void main()
{
    char s[100] ;// = "Italy";
    int i,c=0,v=0;
    gets(s);

    printf("Vowel is :");
    for (i=0; s[i]; i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||
            s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            printf("%c",s[i]);
            ++v;
        }
    }
    printf("\nThe Number of vowel = %d\n",v);
    printf("Consonent is :");
    for (i=0; s[i]; i++)
    {
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            printf("%c",s[i]);
            ++c;
        }
    }
    printf("\nThe Number of Consonent = %d\n",c);
     //printf("Line[%d] %c\n",i,s[i]);
     //printf("%c",s[j]);
     //printf("\n%d\n",i);
}
