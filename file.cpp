#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string &str, vector<string> &vec, char delim = '\n') {
    string temp;
    stringstream ss(str);
    while (getline(ss, temp, delim)) {
        if (!temp.empty()) {
            vec.push_back(temp);
        }
    }
    return vec;
}

int main() {

    ifstream file;
    file.open("notes.csv");

    vector<string> arr;

    if (file.is_open()) {
        string str;
        while (getline(file, str)) {
            split(str, arr);
        }
    }

    file.close();

    for (const string &el: arr) {
        cout << el << endl;
    }

    return 0;
}