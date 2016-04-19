//4/19/2016
#include <iostream>
#include<cstdio>
#include<list>
#include<vector>
#include<map>
#include<string>
using namespace std;
map<int,string> m;
map<int,string>::iterator it;
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		m.clear();
		int n;
		string s;
		bool flag=0;
		long int num;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			cin>>s>>num;
			//scanf("%s%d",&s,&num);
			//cout<<s<<num;
			if(m.count(num)) m[num]="0";
			else m[num]=s;
		}
		for( it=m.begin();it!=m.end();it++)
		{	
			if(it->second.compare("0")!=0)
			{
				s=it->second;
				flag=1;
				break;
			}
		}
		if(flag)cout<<s<<"\n";
		else printf("Nobody wins.\n");
	}
	return 0;
}