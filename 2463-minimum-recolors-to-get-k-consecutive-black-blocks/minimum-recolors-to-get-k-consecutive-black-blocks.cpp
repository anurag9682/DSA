class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int ans = INT_MAX;

        for(int i=0; i<n-k+1; i++){
            int wCount = 0;

            for(int j =i; j<i+k; j++){
                if(blocks[j]=='W') wCount++;
            }

            ans = min(ans, wCount);

        }
        return ans;


        
    //     int b_count =0;
    //     int ans = INT_MAX;
    //     for(int i =0; i<blocks.size(); i++){
    //         if(i-k>=0 && blocks[i-k]=='B') b_count--;
    //         if(blocks[i]=='B') b_count++;
    //         ans = min(ans, k-b_count);
    //     }
    //     return ans;
     }
};