#include<bits/stdc++.h>
using namespace std;

///PBDS Starting.......

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<numeric>
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

///PBDS_SET
///Index of Value - .order_of_key()
///Value at Index - .find_by_order()
//typedef tree<int, nua_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_set;
//typedef tree<int, null_type, lessorequal<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_multiset;

/// PBDS closing......
#define int long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20)
#define endl '\n'
///............Author..................................................................
///........... :: .....................................................................
///...........(  NOBODY  )................................................................
///........... Bangabandhu Sheikh Mujibur Rahman Science and Technlogy University,Gopalganj
///............www.facebook.com/naimur76...................................................
///................durjoyovi76@gmail.com...................................................
///........... ....( N~76 ) ...................................................................
///........... No Copyright .....You can copy and paste my code without any permission.....
/// !!!!!!!!!!!!!!!........................................................................
#define pb push_back
#define esp 0.000000001
#define pi acos(-1)
#define N 1000009
#define ff first
#define ss second
#define all(x) x.begin(),x.end()

/// Code Loading Please wait.............
/// returning to N~76.
/// Loading Finished.....................'
int mod=1e9+7;
int go(int base,int po)
{
    if(po==0)return 1;
    int x=go(base,po/2);
    x*=x;
    if(po&1)x*=base;
    return x;
}
int fa(string s,int x){
 int ans=0;
 for(int i=0;i<s.size();i++)
 {
     ans*=10;
     ans+=(s[i]-'0')%x;
     ans%=x;
 }
 return ans;
}
bool same(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0');
    }
    return ( sum % 3 ? false:true );
}
int find_ans(string s)
{
    int ans=0,f=0,pre=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(!f){
            if(s[i]=='0'){s[i]='9';pre=1;}
            else s[i]=s[i]-1;
            f=1;
            continue;
        }
        if(pre){
            if(s[i]=='0'){
                s[i]='9';
            }
            else{
                pre=0;
                s[i]-=1;
            }
        }
    }
    return (fa(s,9)+1);
}
int32_t main()
{
    FAST_IO;
    int tt=1,t=0,cnt=1;
    cin>>tt;
    while(tt--)
    {
        t++;
        string s,ss;
        cin>>s>>ss;
        cout<<"Case "<<t<<": ";
        if(same(s)){
            if(s=="0")cout<<0<<endl;
            else if(ss=="0")cout<<1<<endl;
            else if(ss=="1")cout<<find_ans(s)<<endl;
            else cout<<9<<endl;
        }
        else{
            int x=fa(s,9);
            int y=fa(ss,6);
            int xx=go(x,y)-1;
            xx%=9;
            cout<<xx+1<<endl;
        }
    }

    return 0;
}

