/******************************************************
Name    :sijhah sadique
Roll No :19
batch   :s4CSE
Aim     : To perform Stack Operation
*******************************************************/
/*PROGRAM*/

import java.io.*;
class stack
{
public static void main(String args[])throws IOException
{
int a[]=new int[10];
int n,i,top,item,x;
top=0;x=1;
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader in=new BufferedReader(read);
System.out.println("enter the number of elements");
n=Integer.parseInt(in.readLine());
System.out.println("1:push");
System.out.println("2:pop");
System.out.println("3:peek");
System.out.println("4:exit");
while(x!=0)
{
System.out.println("enter your choice");
int ch=Integer.parseInt(in.readLine());
switch(ch)
{
 case 1:
 if(n==top-1)
 {
 System.out.println("stack overflow");
 break;
 }
 else
 {
 System.out.println("enter the element to be pushed");
 item=Integer.parseInt(in.readLine());
 a[++top]=item;
 }
 break;
 case 2:
 if(n==-1)
 {
 System.out.println("stack empty");
 break;
 }
 else
 {
 item=a[top--];
 System.out.println("the poped item is "+item);
 }
 break;
 case 3:
 System.out.println("the top element is "+a[top]);
 break;
 case 4:
 System.exit(0);
 break;
 default:
 System.out.println("wrong choice");
 } 
 } 
}
}

/*OUTPUT*/

enter the number of elements
5
1:push
2:pop
3:peek
4:exit
enter your choice
1
enter the element to be pushed
1
enter your choice
1
enter the element to be pushed
2
enter your choice
1
enter the element to be pushed
3
enter your choice
1
enter the element to be pushed
4
enter your choice
2
the poped item is 4
enter your choice
3
the top element is 3