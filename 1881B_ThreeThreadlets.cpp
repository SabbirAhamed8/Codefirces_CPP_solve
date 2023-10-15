#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t,n,a,b,c;
   
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        
        if(a==b&&b==c){
            
            cout<<"YES"<<endl;
            
        }
        else{
            ll check = 0;
            ll target = min(a,min(b,c));
            while(check<3){
                if(target<a){
                    a-=target;
                }
                else if(target<b){
                    b-=target;
                }
                else if(target<c){
                    c-=target;
                }
                check++;
            }
            
             
             if(a==b&&b==c){
                    cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
             }
       
        }
       

    }

    return 0;
}