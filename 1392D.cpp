
#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define fast         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF          1e18
#define MOD          1000000007
#define Vi           vector<ll> 
#define Vs           vector<string>
#define VI           vector<vector<ll> >
#define PII          pair<ll,ll> 
#define PSI          pair<string,ll>
#define PB           push_back


int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int DX[] = {0,-1,-1,-1,0,1,1,1};
int DY[] = {-1,-1,0,1,1,1,0,-1};

bool same(string s)
{
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
            return false;
    }
    return true;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s ;
       
        map<int,int> attack;
        map<int,vector<int>> victim;
        int ans = 0;
        int r=0,l=0;
        if(same(s))
        {
            cout << ceil((double)n/3.0) << '\n';
        }
        else{
            vector<pair<char,int>> sub;
            if(s[0]=='L')
                l++;
            else r++;
            for(int i=1;i<n;i++)
            {
                if( s[i]=='L' )
                {
                    if(r>0)
                        sub.PB({'r',r});
                    r=0;
                    l++;
                }
                else{
                    if(l>0)
                    sub.PB({'l',l});
                    l=0;
                    r++;
                }

            }
            if(l>0)
                sub.PB({'l',l});
            else sub.PB({'r',r});
            // for(int i=0;i<sub.size();i++)
            //     cout << sub[i].first << "," << sub[i].second << "  ";
            for(int i=1;i<sub.size()-1;i++)
            {
                ans += sub[i].second/3;
            }
            if(sub[0].first == sub[sub.size()-1].first)
                ans += (sub[0].second + sub[sub.size()-1].second)/3;
            else{
                ans += sub[0].second/3;
                ans += sub[sub.size()-1].second/3;
            }
            cout << ans << '\n';
        }
        
    }
}
