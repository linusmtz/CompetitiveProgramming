/*
USER: Linus Martinez [linusma3]
TASK: 
LANG: C++
*/

#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#define ll long long
#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define FORE(i, a) for(auto i : a)  
#define FORC(cont, it) for(typeof((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define ull unsigned long long
#define ld long double
#define clr(v, d) memset(v, d, sizeof(v))
#define vt vector
#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define fi first
#define se second
#define mem(a,h)    memset(a,(h),sizeof(a))
#define deb(x) cout << #x << ": "<< x << '\n';
using namespace std;

using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<double,double>;

using vi = vt<int>;
using vb = vt<bool>;
using vl = vt<ll>;
using vd = vt<double>;
using vs = vt<string>;
using vpi = vt<pi>;
using vpl = vt<pl>;
using vpd = vt<pd>;

#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007

// 0 = up, 1 = right, 2 = down, 3 = left
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

const double PI = acos(-1.0);
const  int tam = 100010;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return b * (a / gcd(a, b));
}



int calc(vl &dp,vl &v,int target){
    if(target<0){
        return 10000000;
    }
    if(dp[target]!=-1){
        return dp[target];
    }
    int best = INT_MAX;

    for(auto c:v){
        best = min(best,calc(dp,v,target-c)+1);
    }
    dp[target] = best;
    cout << dp[target] << " dp en target" << target << "\n";
    
    return dp[target];

}
struct x{
    int a,b,w;
};

void solve() {
    //ALWAYS USE \n
   // ifstream fin("milkorder.in"); 
    //ofstream fout("milkorder.out");
    
/*
//    BELLMAN-FORD
    //Se usa para encontrar desde un nodo source el camino mas corto hacia los otros nodos
    //Se puede usar para detectar cycles con longitud negativa 
    //Es menos eficiente, pero existe una alternativa que mejora esa complejidad 
    //Soporta weights negativos
    //Se tiene que correr si no hay ciclos negativos N-1 veces y para checar si hay ciclos negativos se corre N veces

    cout << "Enter number of nodes and edges"<<endl;
    int n,e;cin>>n>>e;
    cout << "Enter starting node"<<endl;
    int src;cin>>src;
    vector<x>v;
    vector<int>distance(n+1,10000);
    distance[src]=0;
    for(int i=1;i<=e;i++){
        x edge;cin>>edge.a>>edge.b>>edge.w; 
        v.pb(edge);
    }
    for(int i = 1;i<=n-1;i++){
        for(auto e:v){
            int a,b,w;
            a = e.a;
            b = e.b;
            w = e.w;
            distance[b]=min(distance[b],distance[a]+w);
        }
    }
    for(int i =1;i<=n;i++){
       cout << "Distancia mas corta de nodo "<<src<<" hacia nodo "<< i <<endl;
        cout << "Es de " <<distance[i]<<endl;
    }

*/

//DIJKSTRA 

//No soporta pesos negativos
//Es mas eficiente
//Encuentra el camino mas corto desde nodo source hacia todos los nodos
//cout << "Ingrese el numero de nodos"<<endl;
ll n;cin>>n;
//cout << "Ingrese el numero de edges"<<endl;
ll e;cin>>e;
//cout << "Ingrese el nodo source"<<endl;
//int src;cin>>src;
vector<ll>distance(n+1,1e18);

distance[1]=0;

vector<vector<pair<ll,ll>>>adj(n+1);

for(int i = 1;i<=e;i++){
    ll a,b,w;cin>>a>>b>>w;
    adj[a].pb({b,w});
}

priority_queue<pair<ll,ll>>q;
q.push({0,1});
vector<bool>processed(n+1,false);

while(!q.empty()){
    ll a = q.top().second;
    q.pop();

    if(processed[a]){
        continue;
    }
    processed[a]=true;
    for(auto u:adj[a]){
        ll b=u.first;
        ll w=u.second;

        if(distance[a]+w<distance[b]){
            distance[b]=distance[a]+w;
            q.push({-distance[b],b});
        }

    }

}


for(int i=1;i<=n;i++){
  //  cout <<"El camino mas corto a nodo "<<i<< " desde nodo "<<src<< " es de "<<distance[i]<<endl;
    cout << distance[i] << " ";
}


/*
//FLOYD-WARSHALL

//Encuentra el camino mas corto desde un nodo a otro para todo el grafo


int n;cin>>n;
int e;cin>>e;
vector<vector<int>>adj(n+1,vector<int>(n+1,0));
for(int i=1;i<=e;i++){
    int a,b,w;cin>>a>>b>>w;
    adj[a][b]=w;
}

vector<vector<int>>dist(n+1,vector<int>(n+1,100000));
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j){
            dist[i][j]=0;
        }else if(adj[i][j]!=0){
            dist[i][j]=adj[i][j];
        }
    }
}
for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
        }
    }
}



    cout << dist[1][2] << "\n";

    
*/


}

int main() {
    ios::sync_with_stdio(0); // cin && cout becomes faster
    cin.tie(0);//reduce runtime 
    int t = 1, i = 0;
  
    while (t--){
       solve();
    }
 
    return 0;
}









//THE WORLD IS YOURS
