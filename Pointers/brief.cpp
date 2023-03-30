    #include<bits/stdc++.h>
    using namespace std;
    
    int countPrimes(int n) {
        cout<<"countPrimes function called with n = "<<n<<endl;
        if(n<=1) //if n is less than or equal to 1
        {
            cout<<"n is less than or equal to 1"<<endl;
            return 0;
        }
        vector<bool>isprime(n , true);
        int ans = 0;
        for(int i=2; i<n; i++)
        {
            cout<<"i = "<<i<<endl;
            if(isprime[i]) //if isprime[i] is true
            {
                cout<<"isprime[i] = "<<isprime[i]<<endl;
                cout<<"Incrementing ans"<<endl;
                ans++;
                for(int j=2*i; j<n; j = j + i)
                {
                    cout<<"j = "<<j<<endl;
                    cout<<"isprime[j] = "<<isprime[j]<<endl;
                    cout<<"making isprime[j] = false"<<endl;
                    isprime[j] = false;
                }
            }
        }
        cout<<"returning ans = "<<ans<<endl;
        return ans;
    }
    
    int main()
    {
     int n;
     cin>>n;
     cout << countPrimes(n);
     return 0;
    }