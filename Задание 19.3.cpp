#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    // Создаем набор (set) и мультимножество (multiset)
    set<int> uniqueNumbers; // Набор не может содержать дублирующиеся элементы
    multiset<int> duplicateNumbers; // Мультимножество может содержать дублирующиеся элементы

    // Добавляем элементы в набор
    uniqueNumbers.insert(1);
    uniqueNumbers.insert(2);
    uniqueNumbers.insert(3);
    uniqueNumbers.insert(1); // Этот элемент не будет добавлен, так как 1 уже присутствует в наборе

    // Добавляем элементы в мультимножество
    duplicateNumbers.insert(1);
    duplicateNumbers.insert(2);
    duplicateNumbers.insert(3);
    duplicateNumbers.insert(1); // Этот элемент будет добавлен, так как мультимножество может содержать дублирующиеся элементы

    // Выводим элементы набора
    cout << "Набор (set) содержит: ";
    for (const auto& num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // Выводим элементы мультимножества
    cout << "Мультимножество (multiset) содержит: ";
    for (const auto& num : duplicateNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
