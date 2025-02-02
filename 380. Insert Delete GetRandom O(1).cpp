class RandomizedSet {
public:
    unordered_map<int,int>m;
    vector<int>v;
    int i=0;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)==m.end())
        {
            v.push_back(val);
            m[val]=v.size()-1;
          //  i++;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m.find(val)!=m.end())
        {
            auto a = m.find(val);
            int index = a->second;
            int lv = v.back();
            v[index]=lv;
            m[lv]=index;
            v.pop_back();
            
            m.erase(val);
            
            return true;

        }

        return false;
    }
    
    int getRandom() {
        
        return v[rand()%v.size()];

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
