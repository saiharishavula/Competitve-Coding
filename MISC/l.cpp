
// A C++ program for merging overlapping intervals
#include<bits/stdc++.h>
using namespace std;

// An interval has start time and end time
struct Interval
{
	int start, end;
};

// Compares two intervals according to their staring time.
// This is needed for sorting the intervals using library
// function std::sort(). See http://goo.gl/iGspV
bool compareInterval(Interval i1, Interval i2)
{
	return (i1.start < i2.start);
}

// The main function that takes a set of intervals, merges
// overlapping intervals and prints the result
void mergeIntervals(Interval arr[], int n)
{
	// Test if the given set has at least one interval
	if (n <= 0)
		return;

	// Create an empty stack of intervals
	//stack<Interval> s;

	// sort the intervals in increasing order of start time
	sort(arr, arr+n, compareInterval);

	// push the first interval to stack
	int index=1;

	// Start from the next interval and merge if necessary
	for (int i = 1 ; i < n; i++)
	{
		if (arr[index-1].end < arr[i].start)
			arr[index++] = arr[i];
		else if (arr[index-1].end < arr[i].end)
		{
			arr[index-1].end = arr[i].end;
			//index++;
		}
	}

	// Print contents of stack
	cout << "The Merged Intervals are: ";
	int i=0;
	while (i<index)
	{
		//Interval t = s.top();
		cout << "[" << arr[i].start << "," << arr[i].end << "] ";
    i++;
	//	s.pop();
	}
//	return;
}

// Driver program
int main()
{
	Interval arr[] = { {6,8}, {2,3}, {4,7} };
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}
