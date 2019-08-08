#include<stdio.h>
int main()
{
long long int n,tempvar,rev=0;
scanf("%lld",&n);
tempvar=n;
while(n>0)
{
rev=rev*10+n%10;
n/=10;
}
if(tempvar==rev)
{
printf("yes");
}
else
{
printf("no");
}


}
