//question link-https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/
int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if(L1[0]>R2[0]||L2[0]>R1[0])//if reactangle of left side of other
            return false;
        if(L1[1]<R2[1]||L2[1]<R1[1])//if rctangle is above other
            return false;
        return true;
    }
};