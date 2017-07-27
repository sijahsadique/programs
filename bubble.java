/******************************************************
Name    :sijhah sadique
Roll No :19
batch   :s4CSE
Aim     :To illustrate bubble sort
*******************************************************/
/*PROGRAM*/

import java.io.*;
class bubble
{
 public static void main(String arg[])throws IOException
 {
  InputStreamReader ob=new InputStreamReader(System.in);
  BufferedReader br=new BufferedReader(ob);
  int a[]=new int[10];
  int n,i,j,temp;
  System.out.print("Enter limit");
  n=Integer.parseInt(br.readLine());
  System.out.print("Enter elements in array");
  for(i=0;i<n;i++)
  {
   a[i]=Integer.parseInt(br.readLine());
  }
  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		if(a[i]<a[j])
		{
		temp=a[i];
                a[i]=a[j];
		a[j]=temp;
                }
	}
  }

System.out.println("Sorted array is");
for(i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}