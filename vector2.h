#pragma once

class Vector2 {
private :
    float x, y;
public :
    Vector2(float, float);
    float GetX();
    float GetY();
    void SetVector2(float _x, float _y);
    void SetVector2(std::string _xStr, std::string _yStr);

    Vector2 operator+(const Vector2& _rigth);
};