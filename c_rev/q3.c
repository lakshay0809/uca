/*
 * Count vowels and consonants in String
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q3.c
 * Execution: ./a.out
 */ 

#include <stdio.h>


int main()
{

    char c[]="C Course";
    int vowels=0,consonants=0;
    for(int i=0;i<c[i]!='\0';i++)
    {
        if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U')
        {
            vowels++;
        }
        else 
        {
            consonants++;
        }
    }
    printf("%d %d",vowels,consonants);


}