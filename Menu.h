#pragma once
#include "SinglyLinkedList.h"

class Menu {
private:

    enum class User_Choice{
        createList,
        appendDisplay,
        removeDisplay,
        printList,
        findDisplay,
        exit
    };

    User_Choice userChoice;

    SinglyLinkedList myList;

    bool endOfProgram;

public:

    Menu()
	{
		endOfProgram = false;
		while (!endOfProgram)
		{
			showInterface();
			askUser();
			switch (userChoice)
			{
			case User_Choice::createList:
			{
				createList();
				break;
			}
			case User_Choice::appendDisplay:
			{
				appendDisplay();
				break;
			}
			case User_Choice::removeDisplay:
			{
				removeDisplay();
				break;
			}
			case User_Choice::printList:
			{
				myList.print();
				break;
			}
			case User_Choice::findDisplay:
			{
				findDisplay();
				break;
			}
			case User_Choice::exit:
			{
				endOfProgram = true;
				break;
			}
			default: {};
			};
		}
	}
    
    void createList();

    void appendDisplay();

    void removeDisplay();

    void findDisplay();

    static void showInterface();

    void askUser();
};