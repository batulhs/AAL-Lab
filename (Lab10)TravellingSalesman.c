#include <stdio.h>
#include <limits.h>

#define MAX 16

int dist[MAX][MAX];  
int dp[1 << MAX][MAX];  

int min(int a, int b) {
    return a < b ? a : b;
}

int tsp(int mask, int pos, int n) {
    if (mask == (1 << n) - 1) {  
        return dist[pos][0];  
    }
    
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INT_MAX;

    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {  
            int newAns = dist[pos][city] + tsp(mask | (1 << city), city, n);
            ans = min(ans, newAns);
        }
    }

    dp[mask][pos] = ans;
    return ans;
}

int main() {
    int n;

    printf("Enter the number of cities: ");
    scanf("%d", &n);

    printf("Enter the distance matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);
        }
    }

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = -1;
        }
    }

    int result = tsp(1, 0, n);
    
    printf("The minimum cost to visit all cities is: %d\n", result);

    return 0;
}

/*OUTPUT
Enter the number of cities: 3
Enter the distance matrix:
34
5
8
2
98
3
61
10
66
The minimum cost to visit all cities is: 20*/
