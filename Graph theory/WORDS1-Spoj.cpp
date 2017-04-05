#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

int indeg[26], outdeg[26], color[26];
int found[26]={0}, g[26][26];
char word[1001];

// gud question on Euler path.

bool isConnected() {
	int i, j;
	queue< int > Q;
	for(i=0; i<26; i++)
  if(found[i]==1)
  break;
  found[i] = 2;
	Q.push(i);
	while(!Q.empty()) {
		i = Q.front();
    Q.pop();
		for(j=0; j<26; j++) {
			if((g[i][j] || g[j][i]) && found[j] == 1) {
				Q.push(j);
				found[i] = 2;
			}
		}
		found[i] = 2;
	}
	for(i=0; i<26; i++)
		if(found[i]==1)
			return false;
	return true;
}

bool hasEularPath() {
	if(!isConnected()) return false;
	int i, cnt1, cnt2;
	for(i=cnt1=cnt2=0; i<26; i++) {
		if(outdeg[i]-indeg[i]==1) cnt1++;
		else if(indeg[i]-outdeg[i]==1) cnt2++;
		else if(indeg[i]!=outdeg[i]) return false;
	}
	if(cnt1+cnt2==0 || (cnt1==1 && cnt2==1)) return true;
	return false;
}

int main() {
	int t, n, u, v, len;
	scanf("%d", &t);
	while(t--) {
		memset(indeg, 0, sizeof indeg);
		memset(outdeg, 0, sizeof outdeg);
		memset(g, 0, sizeof g);
		memset(found, 0, sizeof found);
		scanf("%d", &n);
		while(n--) {
			scanf("%s", word);
			len = strlen(word);
			outdeg[u = word[0]-'a']++;
			indeg[v = word[len-1]-'a']++;
			g[u][v] = found[u] = found[v] = 1;
		}
		if(hasEularPath()) printf("Ordering is possible.\n");
		else printf("The door cannot be opened.\n");
	}
	return 0;
}
