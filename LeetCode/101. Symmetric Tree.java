
 // Definition for a binary tree node.
  public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }
 
class Solution {
private boolean helper(TreeNode root1,TreeNode root2){
		if(root1==null && root2==null)
			return true;
		if(root1==null || root2==null || root1.val!=root2.val)
			return false;
    //checks the 3rd layer..if the first root's left and second root's right is equal and 
    //the first root's right and second root's left is equal then returns true..it is a recurisve calll
		return helper(root1.left,root2.right) && helper(root1.right,root2.left);

	}

	public boolean isSymmetric(TreeNode root) {
		if(root==null)
			return true;
		return helper(root.left,root.right);

	}
}