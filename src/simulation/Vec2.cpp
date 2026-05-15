#include "Vec2.hpp"
#include <cmath>

float length(const Vec2& v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

float lengthSquared(const Vec2& v) {
    return v.x * v.x + v.y * v.y;
}

Vec2 normalized(const Vec2& v) {
    float len = length(v);
    if (len == 0.0f) {
        return Vec2{0.0f, 0.0f};
    }
    return Vec2{v.x / len, v.y / len};
}

void normalize(Vec2& v) {
    float len = length(v);
    if (len != 0.0f) {
        v.x /= len;
        v.y /= len;
    }
}

float dot(const Vec2& a, const Vec2& b) {
    return a.x * b.x + a.y * b.y;
}

float distance(const Vec2& a, const Vec2& b) {
    const float dx = a.x - b.x;
    const float dy = a.y - b.y;
    return std::sqrt(dx * dx + dy * dy);
}

Vec2 operator+(const Vec2& a, const Vec2& b) {
    return Vec2{a.x + b.x, a.y + b.y};
}

Vec2 operator-(const Vec2& a, const Vec2& b) {
    return Vec2{a.x - b.x, a.y - b.y};
}

Vec2 operator*(const Vec2& v, float scalar) {
    return Vec2{v.x * scalar, v.y * scalar};
}

Vec2 operator*(float scalar, const Vec2& v) {
    return Vec2{v.x * scalar, v.y * scalar};
}

Vec2 operator/(const Vec2& v, float scalar) {
    return Vec2{v.x / scalar, v.y / scalar};
}

Vec2 operator-(const Vec2& v) {
    return Vec2{-v.x, -v.y};
}

Vec2& operator+=(Vec2& a, const Vec2& b) {
    a.x += b.x;
    a.y += b.y;
    return a;
}

Vec2& operator-=(Vec2& a, const Vec2& b) {
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

Vec2& operator*=(Vec2& v, float scalar) {
    v.x *= scalar;
    v.y *= scalar;
    return v;
}

Vec2& operator/=(Vec2& v, float scalar) {
    v.x /= scalar;
    v.y /= scalar;
    return v;
}

bool operator==(const Vec2& a, const Vec2& b) {
    return a.x == b.x && a.y == b.y;
}

bool operator!=(const Vec2& a, const Vec2& b) {
    return !(a == b);
}
