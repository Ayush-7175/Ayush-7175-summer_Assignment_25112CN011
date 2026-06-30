#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item {
    int itemId;
    string itemName;
    string itemType;
    int manaRequired;
};

int main() {
    vector<Item> inventory;
    int choice;

    while (true) {
        cout << "\n--- Mage Inventory Management System ---\n";
        cout << "1. Add Magical Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Item i;
            cout << "Enter Item ID: ";
            cin >> i.itemId;
            cin.ignore();
            cout << "Enter Item Name: ";
            getline(cin, i.itemName);
            cout << "Enter Item Type (e.g., Staff, Potion, Scroll): ";
            getline(cin, i.itemType);
            cout << "Enter Mana Required: ";
            cin >> i.manaRequired;
            inventory.push_back(i);
            cout << "Item added to inventory successfully!\n";
        } 
        else if (choice == 2) {
            if (inventory.empty()) {
                cout << "Inventory is empty.\n";
            } else {
                cout << "\n--- Current Inventory ---\n";
                for (const auto& i : inventory) {
                    cout << "ID: " << i.itemId << " | Name: " << i.itemName << " | Type: " << i.itemType << " | Mana Cost: " << i.manaRequired << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Item ID to search: ";
            cin >> searchId;
            for (const auto& i : inventory) {
                if (i.itemId == searchId) {
                    cout << "Item Found -> ID: " << i.itemId << " | Name: " << i.itemName << " | Type: " << i.itemType << " | Mana Cost: " << i.manaRequired << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Magical item with ID " << searchId << " not found.\n";
            }
        } 
        else if (choice == 4) {
            cout << "Exiting inventory system. Adventure awaits!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}