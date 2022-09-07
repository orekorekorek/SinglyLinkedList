all:
	clang++ -std=c++20 Display.cpp main.cpp Menu.cpp SinglyLinkedList.cpp -o main.exe

clear:
	rm *.exe
