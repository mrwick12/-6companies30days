link-https://practice.geeksforgeeks.org/problems/implement-atoi/1/
int atoi(string str) {
        //Your code here
        int ans=0;
        
        if(str[0]== '-'){
     
            for(int i=1;i<str.size();i++){
            if(str[i]-'0'>=0 && str[i]-'0'<=9)
            ans=ans*10+(str[i]-'0');
            else{
                return -1;
            }
        }
        ans= 0-ans;
        }
        else{for(auto i : str){
            if(i-'0'>=0 && i-'0'<=9)
            ans=ans*10+(i-'0');
            else{
                return -1;
            }
        }
        }
        return ans!=0? ans:-1; 
    }