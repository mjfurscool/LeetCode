class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last_positions(26, 0);
        vector<int> ret;
        for(int i = 0 ; i < s.size() ; ++i){
            last_positions[s[i] - 'a'] = i;
        }
        
        int min_position = -1;
        int sub_length = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            min_position = max(min_position, last_positions[s[i] - 'a']);
            sub_length++;
            if(i == min_position){
                ret.push_back(sub_length);
                sub_length = 0;
                min_position = -1;
            }
        }
        return ret;
    }
};