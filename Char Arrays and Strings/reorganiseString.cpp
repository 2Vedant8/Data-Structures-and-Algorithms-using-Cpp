
    #include<bits/stdc++.h>
    using namespace std;
    string reorganizeString(string s) {

        int hash[26]= {0};
        for(int i=0; i<s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }
 
        char mostfreqchar;
        int maxfreq = INT_MIN;
        for(int i=0; i<26; i++)
        {
            if(hash[i]>maxfreq)
            {
                maxfreq= hash[i];
                mostfreqchar = i + 'a';
            }
        }
        int index =0;
        while(maxfreq>0 && index<s.size())
        {
            s[index]= mostfreqchar;
            maxfreq--;
            index = index+2;
        }

        if(maxfreq!=0)
        {
        return "";
        }
        //baaki ke characters
        for(int i=0; i<26; i++)
        {
            while(hash[i] > 0)
            {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index = index + 2;
            }
        }
        return s;
    }
    int main()
    {
     string s;
     cin>>s;
     reorganizeString(s);
     return 0;
    }