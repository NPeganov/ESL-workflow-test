#include <stdio.h>

#include "Vector3D.h"

int main() {
    Vector3D v1 = {3.01, 2.01, 1.01};
    Vector3D v2 = {6.01, 5.01, 4.01};

    printf("Манипуляции с 3D векторами\n\n");

    printf("Вектор V1: (%.2f, %.2f, %.2f)\n", v1.x, v1.y, v1.z);
    printf("Вектор V2: (%.2f, %.2f, %.2f)\n\n", v2.x, v2.y, v2.z);    

    Vector3D sum_vec = add(&v1, &v2);
    Vector3D sub_vec = subtract(&v1, &v2);
    double dot_prod = dot(&v1, &v2);
    Vector3D cross_vec = cross(&v1, &v2);

    printf("Сумма векторов: (%.2f, %.2f, %.2f)\n", sum_vec.x, sum_vec.y, sum_vec.z);
    printf("Разность векторов: (%.2f, %.2f, %.2f)\n", sub_vec.x, sub_vec.y, sub_vec.z);
    printf("Скалярное произведение: %.2f\n", dot_prod);
    printf("Векторное произведение: (%.2f, %.2f, %.2f)\n", cross_vec.x, cross_vec.y, cross_vec.z);

    return 0;
}