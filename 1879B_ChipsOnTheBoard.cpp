#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
   
        ll t;
        
        
        cin>>t;
        
        while(t--){
            
            ll n,suma=0,sumb=0;
            cin>>n;
            ll arr[n],brr[n];
            
            for(ll i=0; i<n; i++){
                cin>>arr[i];
            }
            for(ll i=0; i<n; i++){
                cin>>brr[i];
            }
            
            ll mina = *min_element(arr,arr+n);
            ll minb = *min_element(brr,brr+n);
            
            mina*=n;
            suma = accumulate(brr, brr+n, suma);
            suma+=mina;
            
            minb*=n;
            sumb = accumulate(arr, arr+n, sumb);
            sumb+=minb;
           
            if(suma<sumb){
                cout<<suma<<endl;
            }
            else{
                cout<<sumb<<endl;
            }
            
        }
     

    return 0;
}