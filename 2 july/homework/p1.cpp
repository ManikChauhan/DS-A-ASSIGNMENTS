class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i,j,k=0;
        for(i=0;i<arr.size()-1;i++)
        {
            for(j=i+1;j<arr.size();j++)
            {
                if(arr[j]>arr[i])
                {
                    k++;
                    break;
                }
            }
        }
        return k;
    }
};