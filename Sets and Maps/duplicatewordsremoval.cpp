#include<bits/stdc++.h>
using namespace std;
void removedup(string str){
    istringstream ss(str);
    unordered_set <string> hsh;
    do{
        string word;
        cin>>word;

        while(hsh.find(word)==hsh.end())
        {
            cout<<word<<" ";
            hsh.insert(word);
        }
    }while(ss);
}
int main()
{
    string str;
    cin>>str;
    removedup(str);
    return 0;
}
