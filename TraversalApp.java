/*************************************************************************************************
Name      :sijhah sadique
Batch     :s4 CSE
Roll No   :43
Program No:4.1
Aim       :To implement tree operations
***************************************************************************************************/

//PROGRAM
import java.io.*;

class node
 {
   public int data;
   node lchild,rchild;
   public node (int d)
         {
          data=d;
          lchild=null;
          rchild=null;
         }
  }
class tree
   {
      public node root;
      public tree ()
          {
           root=null;
          }
     public void insert (int d)
	{
	node newnode =new node (d);
                    if(root==null)
	root=newnode;
	else
		{
		 node current=root;
		node parent;
		while(true)
			{
			parent=current;
			if(current.data<d)
			{
			current=current.rchild;
			if(current==null)
				{
				parent.rchild=newnode;
				return;
				}
			}
			else
			{
			current=current.lchild;
			if(current==null)
				{
				parent.lchild=newnode;
				return ;
				}
			}
			}
		}
	}
public void find (int k)
   {
	node current=root;	
	while(current.data!=k)
	{
	if(current.data<k)
	current=current.rchild;
	else
	current=current.lchild;
	if(current==null)
		{
		System.out.println("Search not found");
		return;
		}
	}
	if(current.data==k)
	System.out.println("Search found");
 }
public void display (node lroot)
    {
	if(root==null)
	System.out.println("tree is empty");
	else if(lroot!=null)
	{
	System.out.print(lroot.data+"    ");
	display(lroot.lchild);
	display(lroot.rchild);
	}
}
public void preorder(node lroot)
  {
     if(lroot!=null)
	{
	System.out.print(lroot.data+"    ");
	preorder(lroot.lchild);
	preorder(lroot.rchild);
	}
}

public void inorder(node lroot)
  {
     if(lroot!=null)
	{
	inorder(lroot.lchild);
	System.out.print(lroot.data+"    ");
	inorder(lroot.rchild);
	}
}
public void postorder(node lroot)
  {
     if(lroot!=null)
	{
	postorder(lroot.lchild);
	postorder(lroot.rchild);
	System.out.print(lroot.data+"    ");
	}
}


	
}

class TraversalApp
	{
	public static void main(String arg[]) throws IOException
  		{
		tree t =new tree();
		int ch,n;	
		DataInputStream in=new DataInputStream (System.in);
		while(true)
		{
		System.out.println("\n*****************************\n");
		System.out.println("\nEnter the choice ");
		System.out.println("\n1.Insert\n2.Display\n3.Inorder traversal\n4.Preorder traversal\n5.Postorder traversal \n6.Quit");
		
		ch=Integer.parseInt(in.readLine());
		switch(ch)
			{
			case 1:
				System.out.print("Enter the element to be inserted :    ");
				n=Integer.parseInt(in.readLine());
				t.insert(n);
				break;
			case 2 :    t.display(t.root);
				break;
			
			case 3:    System.out.println(" Inorder Traversal     :   ");
				t.inorder(t.root);
				break;
			case 4:   System.out.println("Preorder Traversal    :   "); 
				t.preorder(t.root);
				break;
			case 5:    System.out.println("Postorder Traversal    :   ");
				t.postorder(t.root);
				break;
			case 6: return;
			}
		}
	}
}


/**OUTPUT


*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    10

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    2

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    5

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    15

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    12

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
1
Enter the element to be inserted :    15

*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
2
10    2    5    15    12    15
*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
3
 Inorder Traversal     :
2    5    10    12    15    15
*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
4
Preorder Traversal    :
10    2    5    15    12    15
*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
5
Postorder Traversal    :
5    2    15    12    15    10
*****************************


Enter the choice

1.Insert
2.Display
3.Inorder traversal
4.Preorder traversal
5.Postorder traversal
6.Quit
6