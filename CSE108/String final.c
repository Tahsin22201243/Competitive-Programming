#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[30] = "Jhony";
    char s2[30] = "Pa";
    char s3[30] = "yes";
    char s4[30],s5[30];
    strcat(s1," ");
    strcpy(s4,s1);
    strcat(s4,s1);
    strcat(s4,s3);
    strcpy(s5," ");
    strcpy(s5,s2);
    strncat(s5,s2,2);
    strcat(s4,s5);
    printf("%s",s4);
}
