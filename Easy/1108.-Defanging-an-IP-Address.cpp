//Runtime: 2 ms, faster than 28.58% of C++ online submissions for Defanging an IP Address.
//Memory Usage: 5.8 MB, less than 89.56% of C++ online submissions for Defanging an IP Address.

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = 0; i < address.size(); ++i)
        {
            if(address[i] == '.')
            {
                address.insert(address.begin() + i, '[');
                address.insert(address.begin() + i + 2, ']');
                i += 2;
            }
        }
        return address;
    }
};


//================BETTER SOLUTION ====================//
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
//Memory Usage: 6 MB, less than 68.97% of C++ online submissions for Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = 0; i < address.size(); ++i)
        {
            if(address[i] == '.')
            {
                address = address.substr(0, i) + "[.]" + address.substr(i + 1, address.size());
                
                i += 2;
            }
        }
        return address;
    }
};
