#include <bits/stdc++.h>
using namespace std;

struct item {
    int weight;
    int value;
    char level;
};

int knapsack(int capacity, vector<item>& items) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    
    
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (items[i - 1].weight <= w) {
                dp[i][w] = max(items[i - 1].value + dp[i - 1][w - items[i - 1].weight], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int main() {
    vector<item> items(6);  // Initialize the vector with 6 items
    
    cout << "Enter the weights of the items:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> items[i].weight;
    }
    
    cout << "Enter the values of the items:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> items[i].value;
    }
    
    cout << "Enter the levels (X or Y) of the items:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> items[i].level;
    }

    vector<item> x_items;
    vector<item> y_items;

    for (int i = 0; i < 6; i++) {
        if (items[i].level == 'Y') {
            y_items.push_back(items[i]);
        } else {
            x_items.push_back(items[i]);
        }
    }

    int capacity;
    cout << "Enter the knapsack capacity: ";
    cin >> capacity;

    int max_profit_from_y = 0;
    int y_total_weight = 0;
    for (auto& y_item : y_items) {
        y_total_weight += y_item.weight;
        max_profit_from_y += y_item.value;
    }

    // If the total weight of Y items is more than the capacity, find the best subset
    if (y_total_weight > capacity) {
        max_profit_from_y = knapsack(capacity, y_items);
        cout << "The maximum profit is: " << max_profit_from_y << endl;
        return 0;
    } else {
        // If all Y items fit, adjust the remaining capacity
        capacity -= y_total_weight;
    }

    // Calculate the maximum profit from X items with the remaining capacity
    int max_profit_from_x = knapsack(capacity, x_items);

    // Total maximum profit
    int total_max_profit = max_profit_from_y + max_profit_from_x;
    cout << "The maximum profit is: " << total_max_profit << endl;

    return 0;
}
