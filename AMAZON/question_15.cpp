link-https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#
void linkdelete(struct Node  *head, int M, int N)
    {
        // base case
        if(head == nullptr){
            return;
        }
        int ctr = 0; 
        while(head != nullptr and head->next){
            ctr++;
            if(ctr == M){
                // you have to delete here N nodes
                Node* curr = head;
                int loop = N;
                while(loop--){
                    if(curr->next)
                        curr = curr->next;
                }
                head->next = curr->next;
                ctr = 0;
            }
            head = head->next;
        }
    }