#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

// Структура для представления 3D-вектора
typedef struct {
    double x, y, z;
} Vector3D;

// Операция сложения векторов
Vector3D add(const Vector3D *a, const Vector3D *b);

// Операция вычитания векторов
Vector3D subtract(const Vector3D *a, const Vector3D *b);

// Скалярное (внутреннее) произведение векторов
double dot(const Vector3D *a, const Vector3D *b);

// Векторное (крестное) произведение векторов
Vector3D cross(const Vector3D *a, const Vector3D *b);

#endif