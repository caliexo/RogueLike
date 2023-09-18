#pragma once
#include<iostream>

class Vector2D
{
private:
	
	float x, y;

public:

	Vector2D(float x = 0, float y = 0) : x(x), y(y)
	{

	}

	~Vector2D()
	{

	}

	float GetX() { return this->x; }
	float GetY() { return this->y; }

	void SetX(float NewX) { this->x = NewX; }
	void SetY(float NewY) { this->x = NewY; }

	void AddX(float SecondX) { this->x += SecondX; }
	void AddY(float SecondY) { this->y += SecondY; }

	Vector2D operator+(const Vector2D& other) const
	{
		return Vector2D(this->x + other.x, this->y + other.y);
	}

	Vector2D& operator+=(const Vector2D& other)
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	}

	Vector2D operator-(const Vector2D& other) const
	{
		return Vector2D(this->x - other.x, this->y - other.y);
	}

	Vector2D& operator-=(const Vector2D& other)
	{
		this->x -= other.x;
		this->y -= other.y;
		return *this;
	}

	Vector2D operator*(const Vector2D& other) const
	{
		return Vector2D(this->x * other.x, this->y * other.y);
	}

	Vector2D& operator*=(const Vector2D& other)
	{
		this->x *= other.x;
		this->y *= other.y;
		return *this;
	}

	Vector2D operator/(const Vector2D& other) const
	{
		return Vector2D(this->x / other.x, this->y / other.y);
	}

	Vector2D& operator/=(const Vector2D& other)
	{
		this->x /= other.x;
		this->y /= other.y;
		return *this;
	}
};

