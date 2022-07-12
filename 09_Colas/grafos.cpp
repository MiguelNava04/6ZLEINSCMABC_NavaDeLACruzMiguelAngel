#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector <vector <int> > arcos(m, vector <int>(3));

    for (int i = 0; i < m; ++i){
        cin >> arcos[i][0] >> arcos[i][1] >> arcos[i][2];     
    }
}

