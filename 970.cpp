vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> val;
        vector<int> ans;
        
        int a = x==1 ? bound : (int)(log(bound)/log(x));
        int b = y==1 ? bound : (int)(log(bound)/log(y));

        for(int i=0;i<=a;i++)
        {
            
            for(int j=0;j<=b;j++)
            {
                int temp=pow(x,i)+pow(y,j);
                if(temp<=bound)
                    val.insert(temp);
                 if(y==1)
                break;
            }
            if(x==1)
                break;
           
        }
        
        for(auto it=val.begin();it!=val.end();it++)
        {
            
            ans.push_back(*it);
        }
        return ans;
    }