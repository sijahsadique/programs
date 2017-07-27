/******************************************************
Name    :sijhah sadique
Roll No :19
batch   :s4CSE
Aim     :To illustrate selection sort
*******************************************************/
/*PROGRAM*/

import java.io.*;
class selection
{
 public static void main(String arg[])throws IOException
 {
  InputStreamReader ob=new InputStreamReader(System.in);
  BufferedReader br=new BufferedReader(ob);
  int a[]=new int[10];
  int n,i,j,temp,min=0;
  System.out.print("Enter limit");
  n=Integer.parseInt(br.readLine());
  System.out.print("Enter elements in array");
  for(i=0;i<n;i++)
  {
   a[i]=Integer.parseInt(br.readLine());
  }
  for(i=0;i<n;i++)
  {
   min=i;
   for(j=i+1;j<n;j++)
   {
    if(a[j]<a[min])
    {
     min=j;
     temp=a[min];
     a[min]=a[i];
     a[i]=temp;
    }
   }
  }
  System.out.println("Elements after sorting are");
  for(i=0;i<n;i++)
  System.out.println(a[i]);
 }
}

/*OUTPUT*/