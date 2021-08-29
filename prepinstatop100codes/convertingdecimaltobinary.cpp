 //C++ Program
    //Decimal to binary conversion
    #include <iostream>
    #include <math.h>
    using namespace std;
    //function to convert decimal to binary
    long convert(int n)
    {
        long binary = 0;
        int i = 1;
        //converting decimal to binary
        while (n!=0)
        {
            int rem = n%2;
            n /= 2;
            binary += rem*i;
            i *= 10;
        }
        return binary;
    }
    //main program
    int main()
    {
        int decimal;
        long binary;
        cout << “Enter a decimal number: “;
        //user input
        cin >> decimal;
        //calling function
        binary = convert(decimal);
        cout << decimal << ” in decimal = “ << binary << ” in binary” << endl ;
        return 0;
    }
