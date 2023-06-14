#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<long long> weirdAlgorithm(long long n)
    {
        vector<long long> result;
        result.push_back(n);

        while(n!=1)
        {
            if((n&1) ==1) 
              {
                n=3*n+1;
                result.push_back(n);

              }  
            else
            {
                n/=2;
                result.push_back(n);

            }
        }

        
        return result;
    }
};

int main(){
    
        long long  number;
        cin>>number;
        Solution obj;
        vector<long long >weird=obj.weirdAlgorithm(number);
        for( long long x:weird)
        {
            cout<<x<<" ";
        }

        return 0;

    
}