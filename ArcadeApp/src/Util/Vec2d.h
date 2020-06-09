#pragma once

#include<iostream>
#include "Utils.h"
#include <cassert>
#include <cmath>
#include "Utils.h"

/// <summary>
/// creates a vector with x,y
/// </summary>

class Vec2D
{
public:
	static  const Vec2D Zero;
public:
	Vec2D() = default;
	Vec2D(float valx, float valy) : x{ valx }, y{ valy } {}
	
	void SetX(float _x) { x = _x; }
	void SetY(float _y) { x = _y; }
	float GetX() { return x ;}
	float GetY() { return y; }

	

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

	Vec2D GetUnitVec() const;
	Vec2D& Normalize();
	float Distance(const Vec2D& vec) const;
	float Dot(const Vec2D& vec) const;
	Vec2D ProjectOnto(const Vec2D& vec) const;
	float AngleBetween(const Vec2D& vec) const;
	Vec2D Reflect(const Vec2D& normal) const;

	friend  Vec2D operator*(float scale, const Vec2D& vec);
	
private:
	float x, y;
};

//inline Vec2D Vec2D::Zero = { 0.0f, 0.0f };

