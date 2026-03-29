#include <iostream>

using namespace std;
class Rectangle {
public:
    int width;
    int height;

    void display() { // Prints width and height
        cout << width << " " << height << endl;
    }
};

// Derived class
class RectangleArea : public Rectangle {
public:
    void read_input() { // Reads width and height
        cin >> width >> height;
    }

    void display() { // Prints area
        cout << width * height << endl;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
