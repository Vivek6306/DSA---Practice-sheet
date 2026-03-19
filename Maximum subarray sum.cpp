#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};

    // --> Kadanes Algorithm 

    int sum=0;
    int MaxSum=arr[0];

    for(int i=0; i<arr.size(); i++)
    {
        sum+= arr[i];

        MaxSum=max(sum, MaxSum);

        if(sum < 0)
        {
            sum=0;
        }
    }

    cout<<MaxSum<<endl;
}