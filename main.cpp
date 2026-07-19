#include <iostream>
#include <string>
using namespace std;

// =======================
// Cattle Class
// =======================
class Cattle
{
private:
    int id;
    string breed, category, health, vaccination;
    int age;
    float milk;

public:
    void input();
    void display();
    int getId();
};

// =======================
// Global Variables
// =======================
Cattle cattleList[30];
int cattleCount = 0;

// =======================
// Function Prototypes
// =======================
int searchIndex(int id);
void addCattle();
void displayAll();
void searchCattle();
void updateCattle();
void deleteCattle();

// =======================
// Member Function Definitions
// =======================

// input()

// display()

// getId()

// =======================
// Management Functions
// =======================

// searchIndex()

// addCattle()

// displayAll()

// searchCattle()

// updateCattle()

// deleteCattle()

// =======================
// Main Function
// =======================
int main()
{
    int choice;

    do
    {
        cout << "\n========== Cattle Management System ==========\n";
        cout << "1. Add Cattle\n";
        cout << "2. Display All Cattle\n";
        cout << "3. Search Cattle\n";
        cout << "4. Update Cattle\n";
        cout << "5. Delete Cattle\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addCattle();
            break;

        case 2:
            displayAll();
            break;

        case 3:
            searchCattle();
            break;

        case 4:
            updateCattle();
            break;

        case 5:
            deleteCattle();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
