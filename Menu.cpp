#include "Menu.h"

void Menu::showInterface() {
    cout << "Choose the action:" << endl;
    cout << "1.Create a list\n"
            << "2.Append the display in list\n"
            << "3.Remove the display from list\n"
            << "4.Print the list\n"
            << "5.Find the display by index\n"
            << "6.Exit\n";
    cout << ">>> ";
}

void Menu::askUser() {
    size_t userInput;
    cin >> userInput;
    while (!(userInput <= 6 && userInput >= 1)) {
        cout << "Invalid input" << endl;
        cin >> userInput;
    }
    this->userChoice = static_cast<User_Choice>(userInput - 1);
}

void Menu::createList() {
    myList.clear();
    cout << "You need to enter the first Display" << endl;
    appendDisplay();
}

void Menu::removeDisplay() {
    size_t userInput;
    cout << "Enter the number of display you want to remove" << endl;
    cout << ">>> ";
    cin >> userInput;

    myList.remove(myList[userInput - 1]->d);
}

void Menu::appendDisplay() {
    Display newDisplay;
    cin >> newDisplay;

    myList.append(newDisplay);
}

void Menu::findDisplay() {
    int32_t userInput;
    cout << "Enter the number of display you want to find" << endl;
    cout << ">>> ";
    cin >> userInput;

    cout << myList[userInput - 1]->d << endl;
}