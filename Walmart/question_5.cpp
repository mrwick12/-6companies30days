link-https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1/
int traverseAndSum(Node* root) {
        if (!root) return 0;
        int lst = traverseAndSum(root->left);
        int rst = traverseAndSum(root->right);
        int tmp = root->data;
        if (lst == 0 && rst == 0) root->data = 0;
        else root->data = lst + rst;
        return tmp + lst + rst;
    }
    
    void toSumTree(Node *node)
    {
        traverseAndSum(node);
    }