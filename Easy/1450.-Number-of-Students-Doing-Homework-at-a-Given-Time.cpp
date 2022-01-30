//Runtime: 7 ms, faster than 23.78% of C++ online submissions for Number of Students Doing Homework at a Given Time.
//Memory Usage: 11 MB, less than 50.85% of C++ online submissions for Number of Students Doing Homework at a Given Time.

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        
        for(int i = 0; i < startTime.size(); ++i)
        {
            if(startTime[i] <= queryTime && endTime[i] >= queryTime) ++count;
        }
        
        return count;
    }
};
