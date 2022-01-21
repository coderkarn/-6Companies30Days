class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<2)
            return 0;
        int ans=0;
        //0th and n-1 position can't have peek
        for(int i=1;i<n-1;i++){
            //finding peek
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                //finding length of the mountain
                int c=1;
                int j=i,k=i;
                while(j>0 && arr[j]>arr[j-1]){
                    c++;
                    j--;
                }
                while(k<n-1 && arr[k]>arr[k+1]){
                    c++;
                    k++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};