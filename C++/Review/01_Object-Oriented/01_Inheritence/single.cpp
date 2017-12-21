#include <iostream>

using std::cout;
using std::endl;

class Shape {
    public:
        void setWidth(int w) {
            this->width = w;
        }
        void setHeight(int h) {
            this->height = h;
        }
    protected:
        int width;
        int height;
};

class Rectangle: public Shape {
    public:
        int getArea() {
            return (this->width * this->height);
        }
};

int main() {
    Rectangle rect;

    rect.setWidth(10);
    rect.setHeight(5);

    cout << "AREA: " << rect.getArea() << endl;

    return 0;
}