// // // #include <cmath>
// // // #include <cstdio>
// // // #include <vector>
// // // #include <iostream>
// // // #include <algorithm>
// // // using namespace std;


// // // int main() {
// // //     //    int n=6;
// // //     // //cin>>n;
// // //     // if(n%2!=0)
// // //     // {
// // //     //     cout<<0<<endl;
// // //     // }else{
// // //     //     int half=n/2;
// // //     //     int ans=(half-1)/2;
// // //     //     cout<<ans<<endl;
// // //     // }



// // //     //2nd Question 
// // //     int n;
// // //     cin >> n;
    
// // //     vector<long long> p(n);
// // //     for (int i = 0; i < n; ++i) {
// // //         cin >> p[i];
// // //     }
    
// // //     vector<int> ans(n);
// // //     stack<int> s;
    
// // //     for (int i = 0; i < n; ++i) {
// // //         while (!s.empty() && p[s.top()] < p[i]) {
// // //             s.pop();
// // //         }
        
// // //         int j = -1;
// // //         if (!s.empty()) {
// // //             j = s.top();
// // //         }
        
// // //         ans[i] = i - (j + 1);
// // //         s.push(i);
// // //     }
    
// // //     for (int i = 0; i < n; ++i) {
// // //         cout << ans[i] << (i == n - 1 ? "" : " ");
// // //     }
// // //     cout << std::endl;
// // //     return 0;
// // // }




// // //3rd Question


// // void hanoi(int n, int source, int dest, int aux) {
// //     if (n > 0) {
// //         hanoi(n - 1, source, aux, dest);
// //         cout << source << " " << dest << endl;
// //         hanoi(n - 1, aux, dest, source);
// //     }
// // }

// // int main() {
// //     int n;
// //     cin >> n;
    
// //     long long k = (1LL << n) - 1;
// //     cout << k << endl;
    
// //     hanoi(n, 1, 3, 2);
    
// //     return 0;
// // }




// //4th Question
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <climits>

// using namespace std;

// vector<int> dp;
// set<int> coins;
// int max_val = 100000;

// void precompute() {
//     coins.insert(1);
//     for (int b = 2; b <= 16; b++) {
//         for (long long a = 2; ; a++) {
//             long long val = 1;
//             bool overflow = false;
//             for (int i = 0; i < b; i++) {
//                 if (val > max_val / a) {
//                     overflow = true;
//                     break;
//                 }
//                 val *= a;
//             }
//             if (overflow || val > max_val) {
//                 break;
//             }
//             coins.insert((int)val);
//         }
//     }

//     dp.assign(max_val + 1, max_val + 1);
//     dp[0] = 0;

//     for (int c : coins) {
//         for (int i = c; i <= max_val; i++) {
//             if (dp[i - c] != max_val + 1) {
//                 dp[i] = min(dp[i], dp[i - c] + 1);
//             }
//         }
//     }
// }

// int main() {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);

//     precompute();

//     int t;
//     cin >> t;
//     while (t--) {
//         int x;
//         cin >> x;
//         cout << dp[x] << "\n";
//     }
//     return 0;
// }




///YOUSUFT whatsapp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAXN = 200005;
string s;
int n;

struct Node {
    int len;
    int sufflink;
    int next[26];
};

Node tree[MAXN];
int num_nodes;
int current_suff;
int ans[MAXN];

void init_tree() {
    num_nodes = 2;
    current_suff = 1;

    tree[0].len = -1;
    tree[0].sufflink = 0;
    for (int i = 0; i < 26; i++) tree[0].next[i] = 0;

    tree[1].len = 0;
    tree[1].sufflink = 0;
    for (int i = 0; i < 26; i++) tree[1].next[i] = 0;
}

void add_char(int i) {
    int c = s[i] - 'a';
    int temp = current_suff;

    while (i - 1 - tree[temp].len < 0 || s[i] != s[i - 1 - tree[temp].len]) {
        temp = tree[temp].sufflink;
    }

    if (tree[temp].next[c] != 0) {
        current_suff = tree[temp].next[c];
        ans[i] = tree[current_suff].len;
        return;
    }

    int new_node_idx = num_nodes++;
    tree[new_node_idx].len = tree[temp].len + 2;
    tree[temp].next[c] = new_node_idx;
    for (int j = 0; j < 26; j++) tree[new_node_idx].next[j] = 0;

    if (tree[new_node_idx].len == 1) {
        tree[new_node_idx].sufflink = 1;
    } else {
        int temp_suff = tree[temp].sufflink;
        while (i - 1 - tree[temp_suff].len < 0 || s[i] != s[i - 1 - tree[temp_suff].len]) {
            temp_suff = tree[temp_suff].sufflink;
        }
        tree[new_node_idx].sufflink = tree[temp_suff].next[c];
    }

    current_suff = new_node_idx;
    ans[i] = tree[current_suff].len;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    cin >> s;
    n = s.length();
    init_tree();

    for (int i = 0; i < n; i++) {
        add_char(i);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
