#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define interval structure
struct Interval {
    int start, end;
};

// Comparison function for sorting
bool compare(Interval a, Interval b) {
    return a.start < b.start;
}

void mergeIntervals(vector<Interval>& intervals) {
    if(intervals.size() <= 1) {
        for(int i = 0; i < intervals.size(); i++)
            cout << "[" << intervals[i].start << "," << intervals[i].end << "] ";
        return;
    }

    sort(intervals.begin(), intervals.end(), compare);

    vector<Interval> merged;
    merged.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); i++) {
        Interval last = merged.back();
        Interval current = intervals[i];

        if(current.start <= last.end) {
            // Overlap, merge them
            merged.back().end = max(last.end, current.end);
        } else {
            // No overlap
            merged.push_back(current);
        }
    }

    for(int i = 0; i < merged.size(); i++) {
        cout << "[" << merged[i].start << "," << merged[i].end << "] ";
    }
}

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<Interval> intervals(n);
    cout << "Enter intervals (start and end):" << endl;
    for(int i = 0; i < n; i++) {
        cin >> intervals[i].start >> intervals[i].end;
    }

    cout << "Merged intervals: ";
    mergeIntervals(intervals);

    return 0;
}

