#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");
    
    list<string> words;
    
    
    words.push_back("������");
    words.push_back("�");
    words.push_back("������");
    words.push_back("C++");
    
    
    cout << "�������� ������:" << endl;
    
    list<string>::iterator it;
    for (it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    words.reverse();
    
    
    cout << "���������� ������:" << endl;
    for (it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
