import java.*;
class palindrome1
{
public static void main(String arg[])
{
int n,d,r,m=0;
n=121;d=0;m=n;
//System.out.println(n);
while(n!=0)
{
r=n%10;
d=d*10+r;
n=n/10;
}
//System.out.println(d);
if(m==d)
System.out.println(m+"is a palindrome");
else
System.out.println(m+"is not a palindrome");
}
}