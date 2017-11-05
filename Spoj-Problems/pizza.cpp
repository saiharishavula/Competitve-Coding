#include<stdio.h>
int main(){
	int n,max,l[3];
	int s[3]={0};
	char temp[4];
	scanf("%d",&n);
	int i;
	while(n--){
		scanf("%s",temp);
		if(temp[0]=='1' && temp[2]=='4') s[0]++;
		if(temp[0]=='1' && temp[2]=='2') s[1]++;
		if(temp[0]=='3' && temp[2]=='4') s[2]++;
	}
	max=0;
	if(s[0]<=s[2])
	{ max+=s[0];
		s[2]-=s[0];
	
	}else{
		
		s[0]-=s[2];
        l[0]=s[0]%4;
		l[1]=s[1]%2;
		max+=s[0]/4;
		if(l[0]==3 && l[1]==1)max++;
		if(l[1]==0)
		max++;
	}
    max++;
    max+=s[2];
    max+=s[1]%2+s[1]/2;
	printf("%d",max);
	return 0;
}

