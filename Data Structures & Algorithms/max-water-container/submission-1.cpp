class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();

        int m = 0;

        int i = 0; int j = n - 1;

        while(i < j){
            int h = min(heights[i], heights[j]);
            int b = j - i;

            int area = h * b;

            m = max(area, m);


            if(heights[i] < heights[j]){
                i++;
            }else{
                j--;
            }

        }
        return m;
        
    }
};
