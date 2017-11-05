#include<iostream>
using namespace std;

struct node {
	node* alpha[26];
	int leaf;
};

node* getNode() {
	node* temp = new node;
	temp->leaf = 0;
	for (int i = 0; i < 26; i++) temp->alpha[i] = 0;
	return temp;
}

int counter = 0;
void insert(node* root, string s) {
	int i, n;
	counter++;
	for (i = 0; s[i] != '\0'; i++);
	n = i;
	node* temp = root;
	for (i = 0; i < n; i++)
	{
		if (!temp->alpha[s[i] - 'a'])
		{
			temp->alpha[s[i] - 'a'] = getNode();
		}
		temp = temp->alpha[s[i] - 'a'];
	}
	temp->leaf = 1;
}
bool once = false;
void search(node* root, int k, string m, string &val, int &count) {
	if (root->leaf == 1)
		count++;

	if (k == count && !once )
	{
		once = true;
		val = m;
		return;
	}
	for (int i = 0; i < 26; i++)
	{
		if (root->alpha[i] != 0)
		{
			search(root->alpha[i], k, m+char('a'+i), val, count);
		}
	}
}

int main() {
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		int i, k;
		once = false;
		cin >> k;
		cin >> s;
		node* root = getNode();
		for (i = 0; s[i] != '\0'; i++);
		int n = i;
		cout << "#" << test_case << " ";
		string m = "";
		for (i = 0; i < n; i++)
		{
			m = s[n - i - 1] + m;
			insert(root, m);
		}

		m = "";
		string val = "";
		int count = 0;
		search(root, k, m, val, count);
		if (val=="") cout<<"none"<<endl;
		else cout << val << endl;

	}
}
