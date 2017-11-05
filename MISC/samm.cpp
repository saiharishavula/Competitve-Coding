
#include <cstring>
#include <iostream>


using namespace std;

char s[100];
int main(){
    //string S;
   
    int c=0;
    cin >> s;
     int k=strlen(s);
    for(int i=0;i<k;i++)
        {
        if((i%3)==1)
            {
            if(s[i]!='O')
                c++;
        }
        else
            if(s[i]!='S')
            c++;
    }
    cout<<c<<endl;
    return 0;
}

