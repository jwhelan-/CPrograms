/* John Whelan
   CIS190
   Goldbach's conjecture*/
 
 
#include<stdio.h>
 
int isPrime (int, int);
 
 
int main (void)
{
    int gold, i=2, p;
    printf("Please enter a positive number: ");
    scanf("%d", &gold);
    i = gold/2;
    p = isPrime(gold, i);
    if (p==0)
        printf("The number is not prime\n");
    else
        printf("The number is prime\n");
 
return 0;
}
 
int isPrime (int a, int b)
{
    if(a>b)
    {
        if(a%b == 0){
            return 0;}
        else{
            --b;
            isPrime(a,b);}
    }
 
    return 1;
}