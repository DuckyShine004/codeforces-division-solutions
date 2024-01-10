#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	// Get the adjacency list and mapping to previous elements
	vector<vector<pair<int, uint64_t>>> adj(n);
	map<int, int> prev;

	while (m--) {
		int u, v;
		uint64_t w;
		cin >> u >> v >> w;

		adj[u-1].push_back({v-1, w});
		adj[v-1].push_back({u-1, w});

		prev[u-1] = -1;
		prev[v-1] = -1;
	}

	// Create a list of distances and visited nodes
	vector<bool> seen(n, false);
	vector<uint64_t> dist(n, UINT_MAX);

	dist[0] = 0;

	// Create the priority queue
	priority_queue<pair<uint64_t, int>, vector<pair<uint64_t, int>>, greater<pair<uint64_t, int>> pq;
	pq.push((0,0));

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		// Check if the node has already been visited
		if (seen[u]) {
			continue;
		}

		seen[u] = true;

		// Check if the node is the destinamtion
		if (u == n-1) {
			break;
		}

		// Go through the neighbor nodes
		for (pair<int, uint64_t> v : adj[u]) {
			// Check if the distance is minimal
			if (dist[u] + v.second < dist[v.first]) {
				prev[v.first] = u;
				dist[v.first] = dist[u] + v.second;

				pq.push({dist[v.first], v.first});
			}
		}
	}

	// Check if the destination node is reachable
	if (dist[n-1] == UINT_MAX) {
		cout << -1;
		return 0;
	}
	
	// Traverse the shortest path
	int key = n-1;
	vector<int> path;

	while (key != -1) {
		path.push_back(key);
		key = prev[key];
	}

	while (!path.empty()) {
		cout << path.back() + 1 << " ";
		path.pop_back();
	}
}