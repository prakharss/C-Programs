#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
#define cc continue
#define bb break
#define rr return
#define W while
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define INF 0x3f3f3f3f   //by this INF is equal to INT_MAX/2 which is safe to take as INT_MAX may overflow during operation
//vector<li> vec;
//pair<li,li> pa[1000000];
//string str1,str2;
//li a[1000000];

void solve_this()
{
	li x;
	scanf("%ld",&x);
	if(x<=0)
	cout<<"NO\n";
	else
	{
		if(!(x & (x-1)))
		printf("YES\n");
		else
		printf("NO\n");	
	}		
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
//freopen("i.txt","r",stdin);
//freopen("o.txt","w",stdout);
li T;  cin>>T;  W(T--)
solve_this();
rr 0;
}


