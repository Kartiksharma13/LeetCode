class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int curr_fuel = 0, start = 0;
        int fuel = 0;

        for(int i=0; i<n; i++){
            curr_fuel += (gas[i]-cost[i]);
            fuel += gas[i]-cost[i];
            if(curr_fuel<0)
            { 
                start = i+1;
                curr_fuel = 0;
            }
        }
        if(fuel<0){
            return -1;
        }
        else { return start; }
    }
};