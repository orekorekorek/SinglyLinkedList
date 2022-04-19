#include "Display.h"

istream & operator >> (istream &stream, Display &obj) {
    cout << "Brand:" << endl;
    getline(stream, obj.brand);
    while (obj.brand.length() == 0)
        getline(stream, obj.brand);
    cout << "Color:" << endl;
    getline(stream, obj.color);
    cout << "Text Resolution:" << endl;
    cin >> obj.textResolution;
    cout << "Graphics Resolution:" << endl;
    cin >> obj.graphicsResolution;
    cout << "Price:" << endl;
    cin >> obj.price;
    return stream;
}

ostream & operator << (ostream &stream, Display &obj) {
    cout << obj.getBrand() << " " << obj.getGraphicsResolution() << " " << obj.getPrice();
    return stream;
}

bool operator == (const Display &d1, const Display &d2) {
    return (d1.brand == d2.brand && d1.color == d2.color && d1.graphicsResolution == d2.graphicsResolution && d1.price == d2.price && d1.textResolution == d2.textResolution);
}

bool operator != (const Display &d1, const Display &d2) {
    return !(d1 == d2);
}
    