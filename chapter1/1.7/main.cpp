/***
 * read words from a file and sort and write to another file
 */
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream infile("in.txt");
    vector<string> tmp;
    string word;
    while(infile >> word) {
        tmp.push_back(word);
    }
    for (auto & i : tmp) {
        cout << i << endl;
    }
    sort(tmp.begin(),tmp.end());
    ofstream outfile("out.txt");
    for (auto & _word : tmp) {
        outfile << _word << " ";
    }

    return 0;
}
