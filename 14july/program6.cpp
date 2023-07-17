#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input = "hello world";
    vector<string> words;
    stringstream ss(input);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Check if there are at least two words
    if (words.size() >= 2) {
        // Swap the first and second words
        swap(words[0], words[1]);

        // Combine the words into a new string
        string output;
        for (const string& word : words) {
            output += word + " ";
        }


        output.pop_back();

        cout << output << endl;
    } else {
        cout << "No spaces in between" << endl;
    }

    
}
