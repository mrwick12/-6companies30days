link-https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1#
void matchPairs(char nuts[], char bolts[], int n) {
	    set<int> nuts1;
    set<int> bolts1;
    
    for(int i=0;i<n;i++){
        nuts1.insert(nuts[i]);
        bolts1.insert(bolts[i]);
    }
    auto itr=nuts1.begin();
    for(int i=0;i<n;i++){
        if(nuts1.find(bolts[i])!=nuts1.end() && bolts1.find(nuts[i])!=bolts1.end())
            {
                nuts[i]= *itr;
                bolts[i]= *itr;
            }
            itr++;
    }
}