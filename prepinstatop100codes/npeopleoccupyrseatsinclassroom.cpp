 //C++ Program
    //Permutations in which n people can occupy r seats
    #include<iostream>
    using namespace std;
    //function for factorial
    int factorial(int num)
    {
        int fact=1;
        for(int i=num;i>=1;i--)
            fact*=i;
        return fact;
    }
    //main program
    int main()
    {
        int n,r;
        cout<<"Enter number of people: ";
        //user input
        cin>>n;
        cout<<"Enter number of seats: ";
        //user input
        cin>>r;
        //if there are more people than seats
        if(r<n)
        {
            cout<<"Cannot adjust "<<n<<" people on "<<r<<" seats";
            return 0;
        }
        //finding all possible arrangements of n people on r seats
        // by using formula of permutation

        int p = (factorial(r)/factorial(r–n));
        //printing output
        cout<<"Total arrangements: "<<p;
        return 0;
    }
