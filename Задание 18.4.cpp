#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");
    
    list<string> words;
    
    
    words.push_back("Привет");
    words.push_back("я");
    words.push_back("изучаю");
    words.push_back("C++");
    
    
    cout << "Исходный список:" << endl;
    
    list<string>::iterator it;
    for (it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    words.reverse();
    
    
    cout << "Обращенный список:" << endl;
    for (it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
