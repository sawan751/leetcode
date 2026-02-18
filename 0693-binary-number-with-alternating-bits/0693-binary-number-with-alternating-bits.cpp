class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bit = bitset<32> (n).to_string();
        int pos = bit.find('1');
        bit = bit.substr(pos);
        for(int i =1;i<bit.size();i++){
            if(bit[i] == bit[i-1]){
                return false;
            }
        }

    return true;
    }
};