link-https://practice.geeksforgeeks.org/problems/burning-tree/1/#
int findmaxdist(map<Node*, Node*> &mpp,Node* target)
 {
     queue<Node*> q;
     q.push(target);
     map<Node*, int> visited;
     visited[target] = 1;
     int maxi=0;
     while(!q.empty())
     {
         int s = q.size();
         int flag=0;
         for(int i=0;i<s;i++)
         {
             auto node = q.front();
             q.pop();
             if(node->left and !visited[node->left])
             {
                 flag=1;
                 visited[node->left]=1;
                 q.push(node->left);
             }
             if(node->right and !visited[node->right])
             {
                 flag=1;
                 visited[node->right]=1;
                 q.push(node->right);
             }
             if(mpp[node] and !visited[mpp[node]])
             {
                 flag=1;
                 visited[mpp[node]]=1;
                 q.push(mpp[node]);
             }
         }
             if(flag) maxi++;
     }
               return maxi;
 }
 Node* bfstomapparents(Node* root, map<Node*,Node*> &mpp, int start)
 {
     queue<Node*> q;
     Node* res;
     q.push(root);
     while(!q.empty())
     {
         Node* node = q.front();
         if(node->data == start) res = node;
         q.pop();
         if(node->left)
         {
             mpp[node->left] = node;
             q.push(node->left);
         }
         if(node->right)
         {
             mpp[node->right] = node;
             q.push(node->right);
         }
     }
     return res;
 }
   int minTime(Node* root, int start) 
   {
       map<Node*,Node*> mpp;
       int maxx = findmaxdist(mpp, bfstomapparents(root, mpp, start));
       return maxx;
   }

