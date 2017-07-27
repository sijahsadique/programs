/******************************************************
Name    :sijhah sadique
Roll No :19
batch   :s4CSE
Aim     :To illustrate insertion sort
*******************************************************/
/*PROGRAM*/

import java.io.*;
class insertion
{
 public static void main(String arg[])throws IOException
 {
  InputStreamReader ob=new InputStreamReader(System.in);
  BufferedReader br=new BufferedReader(ob);
  int a[]=new int[10];
  int n,out,i,in,temp;
  System.out.print("Enter limit");
  n=Integer.parseInt(br.readLine());
  System.out.print("Enter elements in array");
  for(i=0;i<n;i++)
  {
   a[i]=Integer.parseInt(br.readLine());
  }
  for(out=1;out<n;out++)
  {
    temp=a[out];
    in=out;
    while(in>0&&a[in-1]>=temp)
    {
      a[in]=a[in-1];
      --in;
    }
    a[in]=temp;
    }
  System.out.println("Sorted array is");
  for(i=0;i<n;i++)
  {
    System.out.println(a[i]);
  }
 }
}