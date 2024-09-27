#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T>
void DisplayContents (const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++ iElement)
	cout << *iElement << endl;
	cout << endl;
}

struct ContactItem
{
	string strContactsName;
	string strPhoneNumber;
	string strDisplayRepresentation;
	
	ContactItem (const string& strName, const string& strNumber)
	{
		strContactsName = strName;
		strPhoneNumber= strNumber;
		strDisplayRepresentation = (strContactsName + ":" + strPhoneNumber );
	} 
	
	bool operator == (const ContactItem& itemToCompare) const
	{
		return (this ->strContactsName < itemToCompare.strContactsName);
	}
	
	operator const char *() const
	{
		return strDisplayRepresentatio.c_str();
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	set <ContactItem> setContacts;
	setContacts.insert(ContactItem("Jack Welsch", "+7 967 111 22 33"));
	setContacts.insert(ContactItem("Bill Gates", "+7 967 333 44 55"));
	setContacts.insert(ContactItem("Angela Merkel", "+7 967 444 55 66"));
	setContacts.insert(ContactItem("Vladimir Putin", "+7 967 555 66 77"));
	setContacts.insert(ContactItem("Manmohan Singh", "+7 967 666 77 88"));
	setContacts.insert(ContactItem("Barack Obama", "+7 967 777 88 99"));
	
	DisplayContents (setContacts);
	
	cout <<"¬ведите человека, номер которого вы хотите удалить: ";
	string NameInput;
	getline(cin, Name);
	
	auto iContactFound = setContacts.find(ContactItem(NameInput,""));
	
	if(iContactFound != setContacts.end())
	{
		setContacts.erase(iContactFound);
		cout << "ќтображение содержимого после удалени€: " << NameInput << endl;
		DisplayContents(setContacts);
	}
	else
		cout << " онтакт не найден" << endl;
		return 0;
}
