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

class PaintCost {
    public:
        int getCost(int area) {
            return area * 65;
        }
};

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea() {
            return (this->width * this->height);
        }
};

int main() {
    Rectangle rect;

    rect.setWidth(6);
    rect.setHeight(10);

    int area = rect.getArea();

    cout << "Area: " << area << endl;

    cout << "First Coat: $" << rect.getCost(rect.getArea()) << endl;
    cout << "Clear Top Coat: $" << rect.getCost(area * 0.2) << endl;

    return 0;
}