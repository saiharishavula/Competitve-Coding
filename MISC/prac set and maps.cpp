#include<iostream>
#include<set>
#include<map>
using namespace std;
bool func(int x,int y)
{
	if(x>y)
	return true;
	else
	return false;
}
int main()
{
	int k,b;
map<int,string,less<int> > a;
map<int,string,less<int> >::iterator i;
a[1]="sai";
a[3]="hari";
a[2]="phani";
//a["kala"]=4;

i=a.begin();

while(i!=a.end())
{
	cout<<(*i).first<<" "<<(*i).second<<endl;
	i++;
}
//cout<<a[0];
}
