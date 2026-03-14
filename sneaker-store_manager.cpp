/**********************************************
* WK 7-8: "Sneaker Collection Manager"        *
* Coded by: Jonathan Ortiz on 3/06/2026        *
* Assigned By: Dr. Whiteley for ITSE-2359-271 *
**********************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;

// 2 enums (one for sneaker brand, the other for categories)
enum brand {ADIDAS, REEBOK, HOKA, DIADORA, OTOOLE};
enum category {RUNNING, HIKING, TRAINING, LIFESTYLE};



// get data function inputs from filestream to 
/* int getData() {
    for (count = 0; count < MAX_SNEAKERS; count++) {
    }
} */

/* sneaker struct - must include 5 fields
*  -brand -category -model -msrp -year */
struct sneakerType 
{
    brand sneakBrand;
    string modelName;
    category sneakCategory;
    double msrp;
    int year;
};

// array of 10 sneaker structs, and its constant size
const int MAX_SNEAKERS = 10;
sneakerType collection[MAX_SNEAKERS];
int count = 0;


// brandToString(sneakBrand): returns brand name as a readable string
string brandToString(brand sneakBrand) {
sneakerType s;
 int choice;
 string brandStr;
    cin >> choice;
    if (choice > 5 || choice < 1) {
        cout << "invalid input" << endl;
    } else {
    switch (choice) {
        case 1:
            s.sneakBrand = ADIDAS;
            break;

        case 2:
            s.sneakBrand = REEBOK;
            break;

        case 3:
            s.sneakBrand = HOKA;
            break;

        case 4:
            s.sneakBrand = DIADORA;
            break;

        case 5:
            s.sneakBrand = OTOOLE;
            break;
        }
        switch (s.sneakBrand) {
        case ADIDAS:
            brandStr = "ADIDAS";
            break;

        case REEBOK:
            brandStr = "REEBOK";
            break;

        case HOKA:
            brandStr = "HOKA";
            break;

        case DIADORA:
            brandStr = "DIADORA";
            break;

        case OTOOLE:
            brandStr = "O'Toole";
            break;
        }
    } return brandStr;
}

// categoryToString(sneakCategory): returns category as string
string categoryToString(category c) {
    int choiceCat;
    cin >> choiceCat;
    switch (choiceCat) {
        case 1:
            c = RUNNING;
            break;

        case 2:
            c = HIKING;
            break;

        case 3:
            c = TRAINING;
            break;

        case 4:
            c = LIFESTYLE;
            break;
    } switch (c) {
        case RUNNING:
            return "Running";
            break;

        case HIKING:
            return "Hiking";
            break;

        case TRAINING:
            return "Training";
            break;

        case LIFESTYLE:
            return "Lifestyle";
            break;
    }
    return "UNKNOWN";
}

sneakerType addSneaker() {
    sneakerType newSneaker;
    cout << "Enter sneaker brand (1-5): ";
    brandToString(newSneaker.sneakBrand);
    cout << "Enter model name: ";
    cin.ignore();
    getline(cin, newSneaker.modelName);
    cout << "Enter sneaker category (1-4): ";
    categoryToString(newSneaker.sneakCategory);
    cout << "Enter MSRP: $";
    cin >> newSneaker.msrp;
    cout << "Enter year: ";
    cin >> newSneaker.year;
    return newSneaker;
}
// displaySneaker function: prints all fields of a sneaker in a clean formatted layout
void displaySneaker(sneakerType sneaker) {
    cout << "\n   Brand    |  Model  |  Category  |  $MSRP   | Year  " << endl;
    cout << "........................................................" << endl;
    cout << sneaker.sneakBrand << "  | " << sneaker.modelName << "   | " << sneaker.sneakCategory << "     | $" << sneaker.msrp << " | " << sneaker.year << endl;
}

//displays all sneakers in collection with all fields (calls displaySneaker for each sneaker in collection)
void displayAll(sneakerType collection[], int count) {
    
    displaySneaker(collection[count]);
}

// main menu function
int choice;

int main() {
    do {
    cout << "\n|+|+|+|[SNEAKER COLLECTION]|+|+|+|" << endl;
    cout << "       1. Display all sneakers" << endl;
    cout << "       2. Add a sneaker" << endl;
    cout << "       3. Search by brand" << endl;
    cout << "       4. Search by category" << endl;
    cout << "       5. Search by year" << endl;
    cout << "       6. Search by price range" << endl;
    cout << "             0. Exit" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        /* displays all sneakers with all its fields*/
        for (int i = 0; i < count; i++) {
            displaySneaker(collection[i]);
        }
        break;

    case 2:
        /* adds sneakers into sneaker collection*/
        if (count < MAX_SNEAKERS) {
            collection[count] = addSneaker();
            count++;
        } else {
            cout << "Collection is full. Cannot add more sneakers." << endl;
        }
        break;
    
    case 3:
        cout << "coming soon in pt 2" << endl;
        break;
    
    case 4:
        cout << "coming soon in pt 2" << endl;
        break;

    case 5:
        cout << "coming soon in pt 2" << endl;
        break;
    
    case 6:
        cout << "coming soon in pt 2" << endl;
        break;
    
    case 0:
        break;
    }
    } while (choice != 0);
    return 0;
}