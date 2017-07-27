import java.io.*;
class linear
{
public static void main(String arg[])throws IOException
{
InputStreamReader ob=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(ob);
int a[]=new int[10];
int n,i,x,f=0;
System.out.print("Enter limit");
n=Integer.parseInt(br.readLine());
 System.out.print("Enter elements in array");
for(i=0;i<n;i++)
{
a[i]=Integer.parseInt(br.readLine());
}
System.out.print("Enter element to be found");
x=Integer.parseInt(br.readLine());

for(i=0;i<n;i++)
{
if(a[i]==x)
{
System.out.print(x+" found in position "+i);
f=1;break;
}
}
if(f==0)
{
System.out.print("Element not found");
}
}
}