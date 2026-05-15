#pragma once

struct Vec2 {
    float x = 0.0f;
    float y = 0.0f;
};

float length(const Vec2& v);
float lengthSquared(const Vec2& v);

Vec2 normalized(const Vec2& v);
void normalize(Vec2& v);

float dot(const Vec2& a, const Vec2& b);
float distance(const Vec2& a, const Vec2& b);

Vec2 operator+(const Vec2& a, const Vec2& b);
Vec2 operator-(const Vec2& a, const Vec2& b);
Vec2 operator*(const Vec2& v, float scalar);
Vec2 operator*(float scalar, const Vec2& v);
Vec2 operator/(const Vec2& v, float scalar);
Vec2 operator-(const Vec2& v);

Vec2& operator+=(Vec2& a, const Vec2& b);
Vec2& operator-=(Vec2& a, const Vec2& b);
Vec2& operator*=(Vec2& v, float scalar);
Vec2& operator/=(Vec2& v, float scalar);

bool operator==(const Vec2& a, const Vec2& b);
bool operator!=(const Vec2& a, const Vec2& b);
