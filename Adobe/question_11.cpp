link-https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1#
string amendSentence (string s)
    {
        string str="";
        str+=tolower(s[0]);
        int i=1;
        while(s[i]!='\0'){
            if(isupper(s[i])){
            str+=" ";
            str+= tolower(s[i++]);}
        else{
        str+=s[i++];
        }
        }
        return str;
        
    }