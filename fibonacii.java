class fibonacii
{
public static void main(String arg[])
{
int a,b,c,t;
a=0;b=1;c=0;t=0;
while(c<10)
{
System.out.print(a+",");
t=a+b;
a=b;b=t;
c++;
}
}
}