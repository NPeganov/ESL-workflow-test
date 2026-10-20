#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

// Структура для представления 3D-вектора
typedef struct {
    double x, y, z;
} Vector3D;

// Операция сложения векторов
Vector3D add(Vector3D a, Vector3D b);

// Операция вычитания векторов
Vector3D subtract(Vector3D a, Vector3D b);

// Скалярное (внутреннее) произведение векторов
double dot(Vector3D a, Vector3D b);

// Векторное (крестное) произведение векторов
Vector3D cross(Vector3D a, Vector3D b);

#endif