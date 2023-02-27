#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// define matrix as vector of vectors
using matrix = vector<vector<int>>;

// multiply two matrices
matrix multiply(matrix A, matrix B) {
    int n = A.size();
    matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] = (C[i][j] + (long long)A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

// calculate A^K
matrix power(matrix A, int K) {
    int n = A.size();
    matrix X(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        X[i][i] = 1;
    }
    while (K > 0) {
        if (K % 2 == 1) {
            X = multiply(X, A);
        }
        A = multiply(A, A);
        K /= 2;
    }
    return X;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
		int N, K;
	    cin >> N >> K;
	    matrix A(N, vector<int>(N));
	    for (int i = 0; i < N; i++) {
	        for (int j = 0; j < N; j++) {
	            cin >> A[i][j];
	        }
	    }
	    matrix X = power(A, K);
	    long long sum = 0;
	    for (int i = 0; i < N; i++) {
	        sum = (sum + X[i][N-i-1]) % MOD;
	    }
	    cout << sum << endl;
	}
    return 0;
}