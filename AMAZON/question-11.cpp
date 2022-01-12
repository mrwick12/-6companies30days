link-https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1#
vector<int> serialize(Node *root) 
   {
       //Your code here
       vector<int> v;
       if(root==NULL)
       {
           v.push_back(-1);
           return v;
       }
       serialize(root->left);
       cout<<root->data<<" ";
       serialize(root->right);
   }
   
   //Function to deserialize a list and construct the tree.
   int i=0;
   Node * deSerialize(vector<int> &A)
   {
      //Your code here
      if(A.size()==0) return NULL;
      if(A[i]==-1) 
      {
          i++;
          return NULL;
      }
      Node* root=new Node(A[i++]);
      root->left=deSerialize(A);
      root->right=deSerialize(A);
      return root;
   }