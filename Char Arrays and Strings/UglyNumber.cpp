    #include<bits/stdc++.h>
    using namespace std;
    bool isUgly(int n) {
        if(n<1)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        while(n%2==0)
        {
            n/=2;
            
        }
        while(n%3==0)
        {
            n/=3;
            
        }
        while(n%5==0)
        {
            n/=5;
            
        }
        return n==1;

    }
    int main()
    {
        int n;
        cin>>n;
    
    int ans = isUgly(n);
    cout<<ans;
     return 0;
    }