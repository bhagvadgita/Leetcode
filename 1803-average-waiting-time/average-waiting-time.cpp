class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait = 0;
        int time = 1;
        for (auto customer: customers){
            if (time<customer[0] ) time = customer[0];
            time+= customer[1];
            wait+= (time-customer[0]);
        }
        wait = wait/(customers.size());
        return wait;
    }
};