class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        map<int,int> map;
        for(int i=0; i<n; i++){
            map[arr[i]] = 0;
        }
        int rank =1 ;
        for(auto i=map.begin(); i!=map.end(); i++){
            i->second = rank;
            rank++;
        }
        for(int i=0; i<n; i++){
            arr[i] = map[arr[i]];
        }
        return arr;
    }
};