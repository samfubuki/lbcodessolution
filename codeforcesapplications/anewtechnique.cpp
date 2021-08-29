#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
/////////////////////////////////////////////////
    int T ;
    cin>>T ;
    while(T--)
    {
        int N,M ;
        cin>>N>>M ;
        vector<int> A[N] , B[M] ;
        for(int i=0 ; i<N ; i++){
           for(int j=0 ; j<M ; j++)
           {
               int x ;
               cin>>x ;
               A[i].push_back(x) ;
           }

        }
        for(int i=0 ; i<M ; i++){
            for(int j=0 ; j<N ; j++)
            {
                int x ;
                cin>>x ;
                B[i].push_back(x) ;
            }
        }
        //finding the col ;
        int val = A[0][0] ;
        int flag=0 ;
        vector<int> Found ;
          for(int i=0 ; i<M ; i++){
            for(int j=0 ; j<N ; j++)
            {
               if(B[i][j]==val){
                   Found=B[i] ;
                   flag=1 ;
                   break ;
               }
            }
            if(flag==1) break ;
        }
       vector< pair<int,vector<int> > >  V ;

          for(int i=0 ; i<N ; i++){
        V.push_back({A[i][0],A[i]}) ;
        }
       vector< pair<int,vector<int> > >::iterator itr ;
       for(int i=0 ; i<Found.size() ; i++){
        for(itr=V.begin() ; itr!=V.end() ; itr++){
            if(itr->first==Found[i]){
                for(int i=0 ; i<itr->second.size() ; i++){
                    cout<<itr->second[i]<<" " ;
                }
                break ;
            }
        }
        cout<<endl ;
       }


    }
    return 0 ;
}

