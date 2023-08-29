#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
int countWords(const string& words) {
    istringstream in(words);
    string words_present;
    int count = 0;

    while (in >> words_present) {
        count++;
    }
    
    return count;
}

int main() {
    string name;
    cout << "Enter the name of the text file: ";
    cin >> name;
    
    ifstream in_file(name);
    if (!in_file) {
        cerr << "Error opening file: " << name << endl;
        return 1;
    }
    
    stringstream buffer;
    buffer << in_file.rdbuf(); 
    string fileContent = buffer.str();
    
    int wordCount = countWords(fileContent);
    
    cout << "Total word count in " << name << ": " << wordCount << endl;
    
    in_file.close();
    
    return 0;
}
