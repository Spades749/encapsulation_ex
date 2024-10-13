#include <iostream>
#include "vector2.h"
#include <string>

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

float Vector2::GetX() {
    return x;
}

float Vector2::GetY() {
    return y;
}

void Vector2::SetVector2(float _x, float _y) {
    x = _x;
    y = _y;
}

void Vector2::SetVector2(std::string _xStr, std::string _yStr)
{
    x = std::stof(_xStr);
    y = std::stof(_yStr);

}

Vector2 Vector2::operator+(const Vector2& _rigth)
{
    return Vector2(_rigth);
}