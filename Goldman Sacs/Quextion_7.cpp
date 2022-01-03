Question link-https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#
int findPosition(int N , int M , int K) {
        if(M<=N-K+1)
            return M+K-1;
        M-=(N-K+1);
        return (M % N== 0) ? N : (M % N);
    }