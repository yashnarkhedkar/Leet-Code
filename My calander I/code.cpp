class MyCalendar {
private:
    vector<pair<int, int> >v;
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(pair<int, int> p : v){
            if(max(p.first, start) < min(p.second, end)){
                return false;
            }
        }
        v.push_back(make_pair(start, end));
        return true;
    }
};
