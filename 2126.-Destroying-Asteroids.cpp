class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long int massUpdated = mass;
        for(int i = 0; i < asteroids.size(); ++i)
        {
            if(massUpdated >= asteroids[i]) massUpdated += asteroids[i];
            else {return false;}
        }
        return true;
    }
};
