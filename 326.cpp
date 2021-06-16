bool isPowerOfThree(int n) {
        double val= log10(n)/log10(3);
        //cout << val <<endl;
        if (n<=0)
            return false;
        if(fmod(val,1)==0)
            return true;
        else
            return false;
    }