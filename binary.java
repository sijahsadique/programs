import java.io.*;
class binary
{
 public static void main(String arg[])throws IOException
 {
  InputStreamReader ob=new InputStreamReader(System.in);
  BufferedReader br=new BufferedReader(ob);
  int a[]=new int[10];
  int n,i,x,f=0,lower,upper;
  System.out.print("Enter limit");
  n=Integer.parseInt(br.readLine());
  System.out.print("Enter elements in array");
  for(i=0;i<n;i++)
  {
   a[i]=Integer.parseInt(br.readLine());
  }
  System.out.print("Enter element to be found");
  x=Integer.parseInt(br.readLine());
  upper=n-1;
  lower=0;
  for(i=0;i<n;i++)
  {
   int mid=(upper+lower)/2;
   if(a[mid]==x)
   {
    System.out.print("Element found in position "+(mid+1));
    f=1;
    break;
   }
   else if(x>a[mid])
   {
    lower=mid+1;
   }
   else
   {
    upper=mid-1;
   }
  }
  if(f==0)
  {
   System.out.print("Element not found");
  }
 }
}

