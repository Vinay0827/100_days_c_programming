//check if two strings are anagrams


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char s1[100],s2[100];

printf("enter first string: ");
scanf("%s", s1);
printf("enter second string: ");
scanf("%s", s2);

if (strlen(s1)!=strlen(s2))
{
printf("the strings are not anagram");
}

//convert to lower case
for(int i=0;i<strlen(s1); i++)
{
s1[i]=tolower(s1[i]);
s2[i]=tolower(s2[i]);
}

//organizing letters
for(int i=0; i<strlen(s1)-1 ; i++)
{
for(int j=i+1; j<strlen(s1); j++)
{
if(s1[i]>s1[j])
{
char temp= s1[i];
s1[i]=s1[j];
s1[j]=temp;
}

if(s2[i]>s2[j])
{
char temp= s2[i];
s2[i]=s2[j];
s2[j]=temp;
}
}
}

if(strcmp(s1,s2)==0)
printf("the strings are anagrams");
else
printf("the strings are not anagrams");


return 0;
}
