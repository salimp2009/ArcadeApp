#include "Vec2d.h"


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

Vec2D Vec2D::operator-()const { return { -x, -y }; }
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