#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int, list<pair<int, int>>> adj;

        void addAgis(int u , int v , int w){
            pair<int, int> p = make_pair(v, w);
            adj[u].push_back(p);
        }

        void printAdj(){
          for(auto i : adj){
              cout << i.first << "-> ";
              for(auto j : i.second){
                  cout << "(" << j.first << " ," << j.second << ") , ";
              }
              cout << endl;
          }

        }

        void dfs(int node , unordered_map<int,bool> &visited , stack<int> &s){
        //   queue<int> q;
          visited[node] = true;
        //   q.push(node);

         for(auto i : adj[node]){
            if(!visited[i.first]){
                  dfs(i.first, visited, s);
            }
         }
        s.push(node);
        }

        void getShortestPath(int s , vector<int> &dist, stack<int> &st){

        dist[s] = 0;
   
           while(!st.empty()){
            int front = st.top();
            st.pop();

            if(dist[front] != INT_MAX){
                for(auto i : adj[front]){
                    if(dist[front] + i.second < dist[i.first]){
                        dist[i.first] = dist[front] + i.second;
                    }
                }
            }
           }
        }
};

int main(){

        graph g;
        g.addAgis(0, 1, 5);
        g.addAgis(0, 2, 3);
        g.addAgis(1, 2, 2);
        g.addAgis(1, 3, 6);
        g.addAgis(2, 3, 7);
        g.addAgis(2, 4, 4);
        g.addAgis(2, 5, 2);
        g.addAgis(3, 4, -1);
        g.addAgis(4, 5, -2);

        g.printAdj();

        int n = 6;
        int source = 1;
        // queue<int> q;
        unordered_map<int, bool> visited;
        stack<int> s;

        for (int i = 0; i < n; i++){
           if(!visited[i]){
              g.dfs(i, visited, s);
           }
        }

        vector<int> dist(n);
        for (int i = 0; i < n;i++){
           dist[i] = INT_MAX;
        }

        g.getShortestPath(source, dist, s);

        cout << " ans is : ";
        for (int i = 0; i < dist.size(); i++){
           cout << dist[i] << " ";
        }
        cout << endl;
}
