//https://www.interviewbit.com/problems/largest-number/

#include<bits/stdc++.h>

bool comp(const int &a, const int &b){
    
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    
    return s1 > s2;
}


string Solution::largestNumber(const vector<int> &a) {

    int n = a.size();

    vector<int> A;
    A = a;
    
    

    sort(A.begin(), A.end(), comp);
    if(A[0] == 0)
        return "0";

    string ans = "";

    for(int i=0;i<n;i++)
        ans+=to_string(A[i]);
    
    return ans;
    

}
