#pragma once
#include <iostream>
#include <string>

using namespace std;

class Display {
private:
    string brand;
    string color;
    int32_t textResolution;
    int32_t graphicsResolution;
    int32_t price;
public:
    Display() { }

    Display(string brand, string color, int32_t textResolution, int32_t graphicsResolution, int32_t price) {
        this->brand = brand;
        this->color = color;
        this->textResolution = textResolution;
        this->graphicsResolution = graphicsResolution;
        this->price = price;
    }

    string getBrand() { return brand; }

    string getColor() { return color; }

    int32_t getTextResolution() { return textResolution; }

    int32_t getGraphicsResolution() { return graphicsResolution; }

    int32_t getPrice() { return price; }

    friend istream & operator >> (istream &stream, Display &obj);
    friend ostream & operator << (ostream &stream, Display &obj);
    friend bool operator == (const Display &d1, const Display &d2);
    friend bool operator != (const Display &d1, const Display &d2);
};
