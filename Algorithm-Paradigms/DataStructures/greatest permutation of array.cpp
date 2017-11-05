#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int myComp(string a, string b)
{
    string ab = a.append(b);
    string ba = b.append(a);

    return ab.compare(ba) > 0 ? 1: 0;
}

void getLargestNum(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myComp);

    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

int main()
{
  	int i,n;
  	string num;
    vector<string> arr;

  	cin>>n;
  	getline(cin,num); // discard

  	for(i=0;i<n;i++)
    {
      	getline(cin, num);
      	arr.push_back(num);
    }

  	getLergestNum(arr);

  	return 0;
}
