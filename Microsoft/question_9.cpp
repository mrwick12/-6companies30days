link-https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/
int CountSum(Node* root,int X,int &count ){
    if(root==0)
    return 0;
    int left=CountSum(root->left,X,count);
    int right=CountSum(root->right,X,count);
    int sum= root->data+left+right;
    if(sum==X){
        count++;
    }
    return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	int count=0;
	CountSum(root,X,count);
	return count;
}