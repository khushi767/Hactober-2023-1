#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

std::vector<Contact> phonebook;

void addContact() {
    Contact newContact;
    std::cout << "Enter name: ";
    std::cin.ignore();
    std::getline(std::cin, newContact.name);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, newContact.phoneNumber);
    phonebook.push_back(newContact);
    std::cout << "Contact added!\n";
}

void displayContacts() {
    if (phonebook.empty()) {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    for (size_t i = 0; i < phonebook.size(); ++i) {
        std::cout << i + 1 << ". Name: " << phonebook[i].name << ", Phone: " << phonebook[i].phoneNumber << "\n";
    }
}

void searchContact() {
    if (phonebook.empty()) {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    std::string searchName;
    std::cout << "Enter name to search: ";
    std::cin.ignore();
    std::getline(std::cin, searchName);

    bool found = false;

    for (const Contact& contact : phonebook) {
        if (contact.name == searchName) {
            std::cout << "Name: " << contact.name << ", Phone: " << contact.phoneNumber << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found.\n";
    }
}

void deleteContact() {
    if (phonebook.empty()) {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    int index;
    displayContacts();
    std::cout << "Enter the index of the contact to delete: ";
    std::cin >> index;

    if (index > 0 && index <= static_cast<int>(phonebook.size())) {
        phonebook.erase(phonebook.begin() + index - 1);
        std::cout << "Contact deleted!\n";
    } else {
        std::cout << "Invalid index.\n";
    }
}

int main() {
    int choice;

    while (true) {
        std::cout << "\nPhonebook Application\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Display Contacts\n";
        std::cout << "3. Search Contact\n";
        std::cout << "4. Delete Contact\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}