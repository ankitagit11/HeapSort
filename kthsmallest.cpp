// C++ code to implement the approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the kth smallest array element
int kthSmallest(int arr[], int N, int K)
{

	// For finding min element we need (Max heap)priority
	// queue
	priority_queue<int> pq;

	for (int i = 0; i < K; i++) {
		// First push first K elememts into heap
		pq.push(arr[i]);
	}
	// Now check from k to last element
	for (int i = K; i < N; i++) {

		if (arr[i] < pq.top()) {
			pq.pop();
			// Push curr element
			pq.push(arr[i]);
		}
	}

	// Return top of element
	return pq.top();
}
