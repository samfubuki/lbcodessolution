//C++ program
    //Quadrants in which coordinates lie
    #include<iostream>
    using namespace std;
    //main program
    int main()
    {
        int x, y;
        cout<<"Enter coordinates: \n";
        cin>>x>>y;
        //checking for quadrants and axis
        if(x==0)
            cout<<x<<",”<<y<<” lies on y axis”;
        else if(y==0)
            cout<<x<<“,”<<y<<” lies on x axis”;
        else if(x>0&&y>0)
            cout<<x<<“,”<<y<<” lies in 1st quadrant”;
        else if(x<0&&y>0)
            cout<<x<<“,”<<y<<” lies in 2nd quadrant”;
        else if(x<0&&y<0)
            cout<<x<<“,”<<y<<” lies in 3rd quadrant”;
        else if(x>0&&y<0)
            cout<<x<<“,”<<y<<” lies in 4th quadrant”;
        else
            cout<<x<<“,”<<y<<” lies on the origin”;
        return 0;
    }
