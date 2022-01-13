link-https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#
    vector <int> calculateSpan(int price[], int n)
    {
    vector<int>v;
    stack<int>s;
    s.push(0);
    v.push_back(1);
    for(int i=1;i<n;i++)
      {
          while((s.empty()==false)&&(price[s.top()]<=price[i]))
          s.pop();
          v.push_back(s.empty()?i+1:(i-s.top()));
          s.push(i);
      }
      return v;
   }