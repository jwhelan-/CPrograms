/* John Whelan
   Project 1
   Problem 3
*/
 
//preprocessor directives
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
void palindrone(char wurd[], int a);
 
int main (void)
{
    char wurd[20];
    int a = 0; 
    int qwerty;
 
 
    printf("This program tests for palindromes\n");
    printf("Please enter the word you would like to test:\n");
    scanf("%s", wurd); // take in user input
 
    for(qwerty = 0; qwerty <= strlen(wurd); qwerty++)
    {
        wurd[qwerty] = toupper(wurd[qwerty]);
    }
 
    palindrone(wurd, a);
 
    return 0;
}
 
void palindrone (char wurd[], int a)
{
 
    int b = strlen(wurd);
     
    if(wurd[a] == wurd[(b-1)-a])
    {
        if(wurd[a] < wurd[(b-1)-a])
            palindrone(wurd, ++a);
        else
            printf("Your word is, in fact, a palindrone.\n");
    }
    else
        printf("That word is not a palindrone.\n");
 
}