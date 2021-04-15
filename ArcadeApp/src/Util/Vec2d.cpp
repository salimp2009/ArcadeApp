#include "Vec2d.h"

//
const Vec2D Vec2D::Zero{ 0.0f, 0.0f };

// STATIC; for testing only
void Vec2D::printname()
{
	printf("Salim is %0.2f years old", 100.0f);
}

std::ostream& operator<<(std::ostream& os, const Vec2D& vec){
	return os <<vec.x<<","<<vec.y<<'\n';
}

bool Vec2D::operator==(const Vec2D& vec2) const
{
	return IsEqual(this->x, vec2.x) && IsEqual(this->y, vec2.y);
}
bool Vec2D::operator!=(const Vec2D& vec2) const
{ 
	return !(*this == vec2);
}
Vec2D Vec2D::operator-()const
{
	return {-x,-y };
}

Vec2D Vec2D::operator-(const Vec2D& vec2)const 
{ return { x-vec2.x, y-vec2.y }; }

Vec2D Vec2D::operator+(const Vec2D& vec2)const
{
	return { x + vec2.x, y + vec2.y };
}
Vec2D& Vec2D::operator-=(const Vec2D& vec2)
{
	*this = *this - vec2;
	return *this;
}
Vec2D& Vec2D::operator+=(const Vec2D& vec2)
{
	*this = *this + vec2;
	return *this;
}


Vec2D Vec2D::operator*(float scale) const { return { x * scale, y * scale }; }
Vec2D Vec2D::operator/(float scale) const { 
			assert(std::fabsf(scale) > EPSILON); 
			return { x / scale, y / scale }; }

Vec2D& Vec2D::operator*=(float scale)
{
	*this = *this * scale;
	return *this;
}

Vec2D& Vec2D::operator/=(float scale)
{
	assert(std::fabsf(scale) > EPSILON);
	*this = *this / scale;
	return *this;
}

Vec2D operator*(float scale, const Vec2D& vec)
{
	return vec * scale;
}

// square magnitude
float Vec2D::Mag2() const
{
	return Dot(*this);
}

// magnitude
float Vec2D::Mag() const
{
	return std::sqrt(Mag2());
}


Vec2D Vec2D::GetUnitVec() const
{
	float mag = Mag();
	if (mag > EPSILON) return *this/mag;

	return Vec2D::Zero;
}
Vec2D& Vec2D::Normalize()
{
	float mag = Mag();
	if (mag > EPSILON) 
		*this /= mag;
	return *this;
}

float Vec2D::Distance(const Vec2D& vec) const
{
	return (vec-*this).Mag();
}

float Vec2D::Dot(const Vec2D& vec) const
{
	return  x * vec.x + y * vec.y;
}

Vec2D Vec2D::ProjectOnto(const Vec2D& vec) const
{
	Vec2D unitVec = vec.GetUnitVec();
	float dot = this->Dot(unitVec);
	return unitVec * dot;
}

float Vec2D::AngleBetween(const Vec2D& vec) const
{
	return std::acosf(this->GetUnitVec().Dot(vec.GetUnitVec()));
}

Vec2D Vec2D::Reflect(const Vec2D& normal) const
{
	// v -2 * (v Dot normal) * n
	return *this - 2*ProjectOnto(normal);
}