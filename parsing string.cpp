#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number, queries;
    cin >> number >> queries;
    vector <string> hrml;
    vector <string> query;
    vector <int> position;
    for (int i = 0; i < number; i++){
        string a;
        cin >> a;
        hrml.push_back(a); 
    }
    
    for (int i = 0; i < queries; i++){
        string a;
        cin >> a;
        query.push_back(a);
    }
    
    for (int i = 0; i < queries; i++){
        int pos = query[i].find("~");
        if (query[pos+1] == "n")
            for(int j = 0; j < number; j++){
                if(hrml[j][pos-1] == pos)
                    cout << hrml[j].substr(pos);
            }
    }
    
    return 0;
}
