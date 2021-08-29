/C++ Program
    //decimal to octal conversion
    #include <iostream>
    #include <math.h>
    using namespace std;
    // Function to convert a decimal number to octal
    int convert(int decimal)
    {
        int i = 1, octal = 0;
        //converting decimal to octal
        while (decimal != 0)
        {
            int rem = decimal % 8;
            decimal /= 8;
            octal += rem * i;
            i *= 10;
        }
        return octal;
    }
    //main program
    int main()
    {
        int decimal,octal;
        cout << “Enter a decimal number: “;
        //user input
        cin >> decimal;
        //calling function
        octal = convert(decimal);
        //printing output
        cout << decimal << ” in decimal = “ << octal << ” in octal”;
        return 0;
    }
