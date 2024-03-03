#include<bits/stdc++.h>

struct Edge {
	int src, dest;
};

struct Graph {
	int V, E;

	struct Edge* edge;
};

struct Graph* createGraph(int V, int E)
{
	struct Graph* graph
		= (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = V;
	graph->E = E;

	graph->edge = (struct Edge*)malloc(
		graph->E * sizeof(struct Edge));

	return graph;
}

int find(int parent[], int i)
{
	if (parent[i] == -1)
		return i;
	return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)
{
	parent[y] = x;
}

int isCycle(struct Graph* graph)
{
	int* parent = (int*)malloc(graph->V);

	memset(parent, -1, sizeof(graph->V));

	for (int i = 0; i < graph->E; ++i) {
		int x = find(parent, graph->edge[i].src);
		int y = find(parent, graph->edge[i].dest);
	
		if (x == y && (x!=-1 && y!=-1))
			return 1;

		Union(parent, x,y);
	}
	return 0;
}

int main(){

	int V = 3, E = 3;
	struct Graph* graph = createGraph(V, E);

	graph->edge[0].src = 0;
	graph->edge[0].dest = 1;

	graph->edge[1].src = 1;
	graph->edge[1].dest = 2;

	graph->edge[2].src = 0;
	graph->edge[2].dest = 2;

	if (isCycle(graph))
		printf("Graph contains cycle");
	else
		printf("Graph doesn't contain cycle");

	return 0;
}
