#include<bits/stdc++.h>
using namespace std;
 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ar={-1,-1};
        if(nums.size()<=0)
            return ar;
        int l=0;
        int r=nums.size()-1;

        while(l<r)
        {
            int mid=(l+r)/2;

            if(nums[mid]>=target)
                r=mid;
            else
                l=mid+1;
        }

        if(nums[l]!=target)
            return ar;
        ar[0]=l;

        r=nums.size()-1;

        while(l<r)
        {
            int mid=((l+r)/2)+1;
            if(nums[mid]<=target)
                l=mid;
            else
                r=mid-1;
        }
         ar[1]=r;

        return ar;



}
