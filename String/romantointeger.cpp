// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int a=0;
    for(int i=0; i<str.length();i++)
    {
        if(((str[i]=='I') && (str[i+1]=='V' || str[i+1]=='X')) ||
           ((str[i]=='X') && (str[i+1]=='L' || str[i+1]=='C')) ||
           ((str[i]=='C') && (str[i+1]=='D' || str[i+1]=='M')))
        {
            a+=mp[str[i+1]]-mp[str[i]];
            i++;
        }
        else
        {
            a+=mp[str[i]];
        }
    }
    return a;
}

