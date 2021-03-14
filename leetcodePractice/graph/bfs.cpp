
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 100;
    vector <pair <int,int>> adj [N];
    adj[1].push_back({2,4});
    for (auto i: adj){
        cout << i << endl;
    }

}