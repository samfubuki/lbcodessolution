#include<bits/stdc++.h>
using namespace std;
int countdecoding(char *digit, int n)
{
    int decodings[n+1];
	decodings[0]=1;
	decodings[1]=1;
	//counting decodings
	for(int i=1;i<=n;i++)
	{
		int q=digit[i]-48;
		int p=digit[i-1]-48;
		if(q>0 && q<=26)
			decodings[i+1]=decodings[i];
		if((q + p*10)>0 && (q + p*10) <=26)
			decodings[i+1] +=decodings[i-1];
	}
	return decodings[n];
}
int main()
{
    char digit[20];
    gets(digit);
    int n = strlen(digit);
    cout<<"Number of decoding of sequence:"<<digit<<"are "<<countdecoding(digit,n);
    return 0;
}
