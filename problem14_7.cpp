bool compare(Interval& a, Interval& b)
    {
        return a.start< b.start;
    } 
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        if(intervals.size()<2)
            return intervals;
        sort(intervals.begin(),intervals.end(),compare);
        //merge duplicate array style
        vector<Interval> res;
        Interval curr=intervals[0];
        for(int idx=1;idx<intervals.size();idx++)
        {
            if(curr.end < intervals[idx].start)
            {
                res.push_back(curr);
                curr= intervals[idx];
            }
            else
            {
              curr.start=min(curr.start,intervals[idx].start);
              curr.end=max(curr.end,intervals[idx].end);
            }
              
        }
        res.push_back(curr);
     return res;    
    }
};
