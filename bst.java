package BST;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class TreeNode {
	int data;
	TreeNode left;
	TreeNode right;
	
	public TreeNode(int data)
	{
		this.data=data;
		this.left=null;
		this.right=null;
	}
}

class BinarySearchTree {
	//private TreeNode root=new TreeNode();
	private TreeNode root=null;
	
	public TreeNode insertKey(TreeNode root, int x)
	{
		TreeNode p=root;
		TreeNode newNode=new TreeNode(x);
		
		
		if(p==null) {
			return newNode;
		}else if(p.data>newNode.data) {
			p.left=insertKey(p.left,x);
			return p;
		}else if(p.data<newNode.data) {
			p.right=insertKey(p.right,x);
			return p;
		}else {
			return p;
		}
	}
		
	public void insertBST(int x)
	{
		root=insertKey(root,x);
	}
		
	public void postorder(TreeNode root)
	{
		if(root!=null)
		{
			postorder(root.left);
			postorder(root.right);
			System.out.println(root.data);
		}
	}
	
	public void printBST()
	{
		postorder(root);
		System.out.println();
	}
	
}

public class Test {

	public static void main(String[] args) throws IOException {
		BinarySearchTree bst = new BinarySearchTree();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s="";
		while((s=br.readLine())!=null&&s.length()!=0) {
			bst.insertBST(Integer.parseInt(s));
		}
		
        bst.printBST();
	}
}
