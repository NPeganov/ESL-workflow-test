#include "Vector3D.h"

// Операция сложения векторов
Vector3D add(Vector3D a, Vector3D b) {
    Vector3D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Операция вычитания векторов
Vector3D subtract(Vector3D a, Vector3D b) {
    Vector3D result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Скалярное (внутреннее) произведение векторов
double dot(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Векторное (крестное) произведение векторов
Vector3D cross(Vector3D a, Vector3D b) {
    Vector3D result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return result;
}