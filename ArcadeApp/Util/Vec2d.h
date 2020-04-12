#pragma once

#include<iostream>

class Vec2D
{
public:
	Vec2D() = default;
	Vec2D(float valx, float valy) : x{ valx }, y{ valy } {std::cout << "vec2d constructor: " << x << ", " << y << '\n'; }
	
	inline void SetX(int _x) { x = _x; }
	inline void SetY(int _y) { x = _y; }
	inline float GetX(int _x) { return x ;}
	inline float GetY(int _x) { return y; }

private:
	float x, y;
};

