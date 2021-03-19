Q: Topological Sort

#include<bits/stdc++.h>
using namespace std;

class GraphG{
    public:
        int V;
        list<int>* adj;
    GraphG(int size);
    void topologicalSort();
    void topologicalInit(int v, bool visited [], stack<int>& Stack);
    void addEdge(int v, int w);
};

GraphG::GraphG(int size){
    this->V = size;
    adj = new list<int>[V];
} 

void GraphG::addEdge(int v, int w){
    adj[v].push_back(w);
}

void GraphG::topologicalSort(){
    bool* visited = new bool[V];
    stack<int> s;
    for(int i = 0; i < V; i++)
        visited[i] = false;
    for(int i = 0; i < V; i++){
        if(visited[i] == false)
            topologicalInit(i, visited, s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    }
}

void GraphG::topologicalInit(int v, bool visited[], stack<int>& Stack){
    visited[v] = true;
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++){
        if(!visited[*i])
            topologicalInit(*i, visited, Stack);
    }
    Stack.push(v);
} 

int main(void){
    GraphG g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.topologicalSort();
}