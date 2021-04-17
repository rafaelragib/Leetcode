#include<bits/stdc++.h>
using namespace std;

double findminvalue(vector<int>nums1,vector<int>nums2)
{
    if(nums1.size()>nums2.size())
        return findminvalue(nums2,nums1);
    int x=nums1.size();
    int y=nums2.size();
    int low=0;
    int high=x;
    while(low<=high)
    {
        int partx=(low+high)/2;
        int party=(x+y+1)/2-partx;
        int maxleftX=nums1[partx-1];
        int minrightX=nums1[partx];

        int maxleftY=nums2[party-1];
        int minrightY=nums2[party];
        if( maxleftX<=minrightY && minrightX>=maxleftY)
        {
            if((x+y)%2==0)
                return (double)((max(maxleftX,maxleftY)+min(minrightX,minrightY))/2);
            else
                return (double)max(maxleftX,maxleftY);
        }
        else if(maxleftX>minrightY)
            high=partx-1;
        else
            low=partx+1;



    }


}

int main()
{
    vector<int> nums1={1,2,6};
    vector<int> nums2={4,5};
    cout << findminvalue(nums1,nums2)<<endl;
}
