class palindrome
{
public static void main(String arg[])
{
int n,d,r,m;
n=m=2442;d=0;
while(n>=0)
{
r=n%10;
d=d*10+r;
n=n/10;
}
System.out.println(m);
if(m==n)
System.out.println(m+"is a palindrome");
else
System.out.println(m+"is not a palindrome");
}
}