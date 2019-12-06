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
printf("%d is a palindrome",orig);
else
printf("%d is not a palindrome",orig);
return 0;
}
