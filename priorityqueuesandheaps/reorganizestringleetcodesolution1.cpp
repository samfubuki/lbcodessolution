class Solution {
public:
    string reorganizeString(string S) {
        int n = S.size();
        int cnt[26]={0};
        for(char ch:S)
        {
          cnt[ch-'a']++;
        }
       auto comparator = [](pair<int, char> &left, pair<int,char> &right){
         return left.first==right.first?right.second<left.second:right.first>left.first;
       };
       priority_queue<pair<int,char>,vector<pair<int,char>>,decltype(comparator)>                      pq(comparator);
       for(int i=0;i<26;i++)
       {
           if(cnt[i]>0)
           {
               if(cnt[i]>(n+1)/2)
               {
                   return "";
               }
             pq.push({cnt[i],(char)(i+'a')});
           }
       }
       string returnstring = "";
       while(pq.size()>=2)
       {
           pair<int,char> pairone = pq.top();
           pq.pop();
           pair<int,char> pairtwo = pq.top();
           pq.pop();
           returnstring = returnstring + pairone.second;
           returnstring = returnstring + pairtwo.second;
           if(--pairone.first>0)
           {
               pq.push(pairone);
           }
           if(--pairtwo.first>0)
           {
               pq.push(pairtwo);
           }
       }
       if(pq.size()>0)
       {
           returnstring += pq.top().second;
           pq.pop();

       }
       return returnstring;

    }
};
