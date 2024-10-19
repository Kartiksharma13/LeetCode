class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int> &a, vector<int>&b){
            return a[1] < b[1];
        });
        int EndPoint = points[0][1];
        int arrow = 1;
        for(int i=1; i<points.size(); i++){
            if(points[i][0] > EndPoint)
            {
                EndPoint = points[i][1]; 
                arrow++;
            }
        }
        return arrow;
    }
};