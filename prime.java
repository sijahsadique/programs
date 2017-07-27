class prime
{
public static void main(String arg[])
{
int n,i,f;
n=29;f=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
System.out.println(n+" is not  prime");
f=1;
break;
}
}
if(f==0)
System.out.println(n+" is prime");
}
}