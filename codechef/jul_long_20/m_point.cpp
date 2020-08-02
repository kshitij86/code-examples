#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<vector<int>> vecv;
typedef vector<int> vec;

vec m_point(vecv kl){
    
    map<int, int> map_x, map_y;
    vec x, y;    

    for(vec b: kl)
        x.pb(b[0]);
    
    for(vec b: kl)
        y.pb(b[1]);
    
    for(int o: x){
        for(vec b: kl){
            if(b[0] == o){
                if(map_x.find(o) == map_x.end())
                    map_x[o] = 1;
                else
                    map_x[o] ++;
            }
        }
    }
    
    for(int o: y){
        for(vec b: kl){
            if(b[1] == o){
                if(map_y.find(o) == map_y.end())
                    map_y[o] = 1;
                else
                    map_y[o] ++;
            }
        }
    }
    
    vec d;

    for(auto it = map_x.begin(); it != map_x.end(); it++){
        if(it->second % 2 != 0){
            d.pb(it->first);   
            break;       
        }
    }

    for(auto it = map_y.begin(); it != map_y.end(); it++){
        if(it->second % 2 != 0){
            d.pb(it->first);   
            break;       
        }
    }

    return d;
}

int main(){
    int test, n, x, y;
    vecv kl;    

    cin >> test;

    while(test--){
        cin >> n;
        for(int i = 0; i < (2*n)-1; i++){
            cin >> x >> y;
            kl.push_back({x, y});
        }
        cout << endl;
        vec i = m_point(kl);
        cout << i[0] << " " << i[1] << endl;
    }

    return 0;
}
