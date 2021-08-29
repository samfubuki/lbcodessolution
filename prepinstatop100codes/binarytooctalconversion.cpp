/C++ Program
    //binary to octal conversion
    #include <iostream>
    #include <math.h>
    using namespace std;
    //Function to convert binary to octal
    int convert(long binary)
    {
        int octal = 0, decimal = 0, i = 0,rem;
        //converting binary to decimal
        while(binary != 0)
        {
            rem = binary % 10;
            int res = rem * pow(2,i);
            decimal += res;
            i++;
            binary/=10;
        }
        i = 1;
        //converting decimal to octal
        while (decimal != 0)
        {
            rem = decimal % 8;
            octal += rem * i;
            decimal /= 8;
            i *= 10;
        }
        return octal;
    }
    //main program
    int main()
    {
        long binary;
        cout << “Enter a binary number: “;
        //user input
        cin >> binary;
        //calling function
        int octal=convert(binary);
        //printing output
        cout << binary << ” in binary = “ << octal << ” in octal “;
        return 0;
    }
