class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        for(int i=0, j=0; i<firstList.size() && j<secondList.size();)
        {
            int first_start = firstList[i][0], first_end = firstList[i][1], second_start = secondList[j][0], second_end = secondList[j][1];
            
            if(first_start <= second_end && second_start <= first_end)
            {
                int int_start = max(first_start , second_start);
                int int_end = min(first_end, second_end);
                result.push_back({int_start, int_end});
            }
            
            if(first_end > second_end)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return result;
    }
};
