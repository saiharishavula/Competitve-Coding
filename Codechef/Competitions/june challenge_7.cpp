#include<iostream>
#include <string>
#include <cstring>
#include <complex>
#include <vector>
#include <cmath>

#define M 1000000007
using namespace std;
long long a[1005];
#define lowbit(x) (((x) ^ (x-1)) & (x))
typedef complex<long double> Complex;

void FFT(vector<Complex> &A, int s){
	int n = A.size(), p = 0;

	while(n>1){
	    p++;
	    n >>= 1;
	}

	n = (1<<p);

	vector<Complex> a = A;

	for(int i = 0; i < n; ++i){
		int rev = 0;
		for(int j = 0; j < p; ++j){
			rev <<= 1;
			rev |= ( (i >> j) & 1 );
		}
		A[i] = a[rev];
	}

	Complex w, wn;

	for(int i = 1; i <= p; ++i){
		int M = 1 << i;
		int K = M >> 1;
		wn = Complex( cos(s*2.0*M_PI/(double)M), sin(s*2.0*M_PI/(double)M) );
		for(int j = 0; j < n; j += M){
			w = Complex(1.0, 0.0);
			for(int l = j; l < K + j; ++l){
				Complex t = w;
				t *= A[l + K];
				Complex u = A[l];
				A[l] += t;
				u -= t;
				A[l + K] = u;
				w *= wn;
			}
		}
	}

	if(s==-1){
        for(int i = 0;i<n;++i)
            A[i] /= (double)n;
    }
}

vector<Complex> FFT_Multiply(vector<Complex> &P, vector<Complex> &Q){
    int n = P.size()+Q.size();
    while(n!=lowbit(n)) n += lowbit(n);

    P.resize(n,0);
    Q.resize(n,0);

    FFT(P,1);
    FFT(Q,1);

    vector<Complex> R;
    for(int i=0;i<n;i++) R.push_back(P[i]*Q[i]);

    FFT(R,-1);

    return R;
}
const long long B = 100000;
const int D = 5;
int l1,l2,L;
char s1[10001],s2[10001];

string convert_to_string(long long x)
{
    string temp_string;
    int temp_count=0;
    while(x>0)
    {
        temp_string.push_back(x%10+'0');
        x/=10;
    }
    return temp_string;

}
int main()
{
    long long n,f,q,R,t,p,c,digit,i;
    long long ans,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=(a[i])%M;
    }
    cin>>q;
    while(q--)
    {
        ans=1;
        c=1;
        cin>>t;
        if(t==1)
        {
            cin>>p>>f;
            a[p-1]=f;
        }
        else
        {
            cin>>R;
            ans*=a[0];
            string temp1=convert_to_string(ans);
            while(1+c*R<=n)
            {
                ans=((ans)*(a[c*R]))%M;
                c++;
            }
            c=1;

            while(1+c*R<=n)
            {
                temp1=mult(temp1,convert_to_string(a[c*R]));
                c++;
            }
            //temp=ans;

            string::iterator i = temp1.begin();
            cout<<*i<<" ";
            cout<<ans<<endl;

        }
    }


}
