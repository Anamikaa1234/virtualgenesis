#include<stdio.h>
int main()
{
int n,reverse=0,rem,orig;
scanf("%d",&n);
orig=n;
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
if(orig==reverse)
printf("Is a palindrome");
else
printf("Is not a palindrome");
return 0;
}
