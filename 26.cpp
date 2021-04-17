#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,1,2};
    int len=nums.size();
    int i=0;
    int j=i+1;
    while(j<len)
    {
        if(nums[i]!=nums[j])
        {
            nums[++i]=nums[j];

        }
        j++;
    }
    for(int i=0;i<j-1;i++)
        cout << nums[i] <<endl;

}
