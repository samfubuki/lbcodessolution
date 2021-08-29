#include <iostream>
using namespace std;
int main()
{

    //Initializing variables.
    char str[100], str_no_spc[100];
    int i=0, j=0 ;

    //Accepting inputs.
    cout<<"Enter the string:\n";
    cin>>str;

    //Iterating each character of string.
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {

            str_no_spc[j++] = str[i];
        }

        i++;
    }
    str_no_spc[j] = '\0';

    //Printing result.
    cout<<"The string after removing all the spaces is:\n"<<str_no_spc;

    return 0;
}
