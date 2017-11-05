#include <iostream>
#define REP(i,a,b) for(i=a;i<=b;++i)
using namespace std;
struct node{
        int x;
        node *next;
        node(){
                x=0;
                next=NULL;
        }
        node(int a){
                x=a;
                next=NULL;
        }
};
struct vector{
        int n;
        node *st,*end;
        vector(){
                n=0;
                st=end=NULL;
        }
        void push(int a){
                ++n;
                node *A = new node(a);
                if(!st){
                    st = end = A;
                }else{
                        end->next=A;
                        end=A;
                }
        }
        void clear(){
                n=0;
                node *p=st,*q;
                while(p){
                        q=p->next;
                        delete(p);
                        p=q;
                }
        }
};
int mrk[100010];
vector g[100010];
void dfs(int v){
        int x;
        node *p=g[v].st;
        mrk[v]=1;
        cout<<v<<" ";
        while(p){
                x=p->x;
                if(!mrk[x])
                        dfs(x);
                p=p->next;
        }
}
void init(int n){
        int i;
        REP(i,0,n-1)
                mrk[i]=0;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int i,n,m,a,b;
                cin>>n>>m;
                REP(i,0,m-1){
                        cin>>a>>b;
                        g[a].push(b);

                }
                init(n);
                REP(i,0,n-1){
                        if(!mrk[i]){
                                dfs(i);
                                cout<<endl;
                        }
                }
                cout<<endl;
        }
}
