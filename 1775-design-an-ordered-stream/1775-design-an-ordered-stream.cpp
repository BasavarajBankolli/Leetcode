class OrderedStream {
public:
    vector<string> s;
    int i = 0;
    OrderedStream(int n) : s(n){
    }
    
    vector<string> insert(int idKey, string value) {
        s[idKey-1] = value;

        vector<string> ref;

        while(i < s.size() && !s[i].empty())
            ref.push_back(s[i++]);

        return ref;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */