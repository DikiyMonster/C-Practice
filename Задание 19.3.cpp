#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    // ������� ����� (set) � ��������������� (multiset)
    set<int> uniqueNumbers; // ����� �� ����� ��������� ������������� ��������
    multiset<int> duplicateNumbers; // ��������������� ����� ��������� ������������� ��������

    // ��������� �������� � �����
    uniqueNumbers.insert(1);
    uniqueNumbers.insert(2);
    uniqueNumbers.insert(3);
    uniqueNumbers.insert(1); // ���� ������� �� ����� ��������, ��� ��� 1 ��� ������������ � ������

    // ��������� �������� � ���������������
    duplicateNumbers.insert(1);
    duplicateNumbers.insert(2);
    duplicateNumbers.insert(3);
    duplicateNumbers.insert(1); // ���� ������� ����� ��������, ��� ��� ��������������� ����� ��������� ������������� ��������

    // ������� �������� ������
    cout << "����� (set) ��������: ";
    for (const auto& num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // ������� �������� ���������������
    cout << "��������������� (multiset) ��������: ";
    for (const auto& num : duplicateNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
