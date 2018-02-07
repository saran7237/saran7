#include <stdio.h>
#include<conio.h>
void main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n); 
    while( n!=0 )
    {
     remainder = n%10;
     reversedInteger = reversedInteger*10 + remainder;
     n /= 10;
    }
    else
    printf("%d is not a palindrome.", originalInteger);
