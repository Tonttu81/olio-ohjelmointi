#include "rectangle.h"

double Rectangle::getArea() {
    double area = width * height;
    return area;
}

double Rectangle::getCircum() {
    double circum = 2 * (width + height);
    return circum;
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}
