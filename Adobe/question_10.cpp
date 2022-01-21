link-https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/#
vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> ump;
        int count=0;
        string s;
        vector<string> v;
        for(int i=0;i<n;i++){
            ump[arr[i]]++;
        }
        for(auto j:ump)
        if(j.second>count){
            count=j.second;
            s=j.first;
        }
        v.push_back(s);
        v.push_back(to_string(count));
        return v;
        
    }