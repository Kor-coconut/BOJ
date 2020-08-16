// BOJ 1922
// 네트워크 연결
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int start, end, weight;
}Edge;

Edge edge[100001];
int node[1001];

int compare(const void* a, const void *b) {
	const Edge *x = (const Edge*)a;
	const Edge *y = (const Edge*)b;
	return x->weight - y->weight;
}

int set_find(int curr) {
	if (curr == node[curr]) return curr;
	else return (node[curr] = set_find(node[curr]));
}

void kruskal(int n, int m) {
	for (int i = 0; i <= n; i++)
		node[i] = i;

	qsort(edge, m, sizeof(Edge), compare);

	int cnt = 0, answer = 0;
	for (int i = 0; i < m && cnt < n; i++, n++) {
		int uset = set_find(edge[i].start), vset = set_find(edge[i].end);
		if (uset == vset) continue;

		node[uset] = vset;
		answer += edge[i].weight;
	}

	printf("%d\n", answer);
	
}

int main(int argc, char* argv[]) {
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
		scanf("%d %d %d", &edge[i].start, &edge[i].end, &edge[i].weight);
	kruskal(N, M);

	return 0;
}