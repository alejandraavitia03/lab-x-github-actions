#include "../header/rectangle.hpp"

Rectangle::Rectangle()
{
width=0;
height=0;
}

Rectangle::Rectangle(int w, int h){
    this->width = w;
    this->height = h;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return 2 * (this->width + this->height);
}

int Rectangle::get_width() {
	return width;
}

int Rectangle::get_height() {
	return height;
}
