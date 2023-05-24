#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000
#define MAX_M 100000
#define MAX_K 1000

typedef struct {
    int from;
    int to;
    int weight;
} Edge;

int parent[MAX_N + 1]; 
Edge edges[MAX_M];
int selected[MAX_N + 1]; 


int cmp(const void *a, const void *b) {
    Edge *edge_a = (Edge *) a;
    Edge *edge_b = (Edge *) b;
    return edge_a->weight - edge_b->weight;
}


int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    parent[x] = find(parent[x]);
    return parent[x];
}


int union_nodes(int a, int b) {
    int parent_a = find(a);
    int parent_b = find(b);
    if (parent_a == parent_b) {
        return 0;
    }
    parent[parent_a] = parent_b;
    return 1; 
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);


    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

   
    for (int i = 0; i < k; i++) {
        int power_plant;
        scanf("%d", &power_plant);
        parent[power_plant] = 0;
    }


    for (int i = 0; i < m; i++) {
        int from, to, weight;
        scanf("%d %d %d", &from, &to, &weight);
        edges[i].from = from;
        edges[i].to = to;
        edges[i].weight = weight;
    }


    qsort(edges, m, sizeof(Edge), cmp);

  
    int selected_count = 0;
    int total_weight = 0;
    for (int i = 0; i < m && selected_count < n - k; i++) {
        int from = edges[i].from;
        int to = edges[i].to;
        int weight = edges[i].weight;
        if (union_nodes(from, to)) {
            selected[from] = 1;
            selected[to] = 1;
            total_weight += weight;
            selected_count++;
        }
    }

    printf("%d\n", total_weight);

    return 0;
}
