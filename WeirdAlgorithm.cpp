/*Consider an algorithm that takes as input a positive integer n
. If n
 is even, the algorithm divides it by two, and if n
 is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n
 is one. For example, the sequence for n=3
 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n
.
*/


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
