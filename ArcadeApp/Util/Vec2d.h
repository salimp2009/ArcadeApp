#pragma once

#include<iostream>
#include "Utils.h"
#include <cassert>

#include "Utils.h"

class Vec2D
{
public:
	Vec2D() = default;
	Vec2D(float valx, float valy) : x{ valx }, y{ valy } {}
	
	inline void SetX(float _x) { x = _x; }
	inline void SetY(float _y) { x = _y; }
	inline float GetX() { return x ;}
	inline float GetY() { return y; }

	friend std::ostream& operator<<(std::ostream& os, const Vec2D& vec);

	bool operator==(const Vec2D& vec2) const;
	bool operator!=(const Vec2D& vec2) const;

	Vec2D operator-()const;
	Vec2D operator-(const Vec2D& vec2)const;
	Vec2D operator+(const Vec2D& vec2)const;
	Vec2D& operator-=(const Vec2D& vec2);
	Vec2D& operator+=(const Vec2D& vec2);

	Vec2D operator*(float scale) const;
	Vec2D operator/(float scale) const;
	Vec2D& operator*=(float scale);
	Vec2D& operator/=(float scale);

	float Mag2() const;    // square magnitude
	float Mag() const;	   // magnitude

	friend  Vec2D operator*(float scale, const Vec2D& vec);


private:
	float x, y;
};

