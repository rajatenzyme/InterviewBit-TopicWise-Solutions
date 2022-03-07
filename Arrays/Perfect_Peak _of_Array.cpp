//https://www.interviewbit.com/problems/perfect-peak-of-array/

int Solution::perfectPeak(vector<int> &A) {

    int n = A.size();

    vector<int> leftMax(n);
    leftMax[0] = A[0];

    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], A[i]);
    }

    vector<int> rightMin(n);
    rightMin[n-1] = A[n-1];

    for(int i=n-2;i>=0;i--){
        rightMin[i] = min(rightMin[i+1], A[i]);
    }

    for(int i=0;i<n;i++){
        if(rightMin[i]==leftMax[i] && leftMax[i]==A[i] 
        && rightMin[i]!=rightMin[i+1] && leftMax[i-1]!=leftMax[i] //Strictly Greater
        && i!=n-1 && i!=0) //Ignoring first and last element according to question
            return 1;
    }

    return 0;
}
