int mySqrt(int x) {
        int l=0;
        int r=x;
        
        while(l<=r)
        {
            long sum=(l+r);
            long mid=sum/2;
            
            if(mid*mid==x)
                return (int)mid;
            else if(mid*mid>x)
                r=mid-1;
            else
                l=mid+1;
        }  
        return l-1;
    }
