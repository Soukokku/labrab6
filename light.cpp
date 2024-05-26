#include <windows.h>
#include <gl/gl.h>
#include <math.h>
#include <iostream>

void Lightt()
{
    GLfloat light_position[] = { 0, 0, 10, 1 }; // Позиция источника света (x, y, z, w)
    GLfloat light_spot_direction[] = { 0, 0, -1.0f }; // Направление прожектора (x, y, z)
    GLfloat light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f }; // Параметры фонового света
    GLfloat light_diffuse[] = { 3.0f, 2.0f, 5.0f, 3.0f }; // Параметры диффузного света
    GLfloat light_specular[] = { 0.2f, 0.2f, 0.2f, 1.0f }; // Параметры зеркального света
    glEnable(GL_LIGHTING); // Включить освещение
    glShadeModel(GL_SMOOTH); // Включить гладкое затенение
    glLightfv(GL_LIGHT0, GL_POSITION, light_position); // Установить позицию источника света
    glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, 70.0f); // Угол отсечения прожектора
    glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, light_spot_direction); // Направление прожектора
    glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, 10.0f); // Экспонента затухания прожектора
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient); // Установить фоновое освещение
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse); // Установить диффузное освещение
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular); // Установить зеркальное освещение
    glEnable(GL_LIGHT0); // Включить источник света GL_LIGHT0
}


void Materiall()
{
    glEnable(GL_COLOR_MATERIAL); // Включить использование цвета материала
    glShadeModel(GL_SMOOTH); // Установить режим затенения GL_SMOOTH (плавное затенение)

    GLfloat material_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f }; // Параметры фонового освещения материала
    GLfloat material_diffuse[] = { 3.0f, 2.0f, 5.0f, 3.0f }; // Параметры диффузного освещения материала
    GLfloat material_specular[] = { 0.2f, 0.2f, 0.2f, 1.0f }; // Параметры зеркального освещения материала
    GLfloat material_shininess[] = { 50.0f }; // Блеск материала

    glMaterialfv(GL_FRONT, GL_AMBIENT, material_ambient); // Установить фоновые свойства материала для лицевой стороны
    glMaterialfv(GL_FRONT, GL_DIFFUSE, material_diffuse); // Установить диффузные свойства материала для лицевой стороны
    glMaterialfv(GL_FRONT, GL_SPECULAR, material_specular); // Установить зеркальные свойства материала для лицевой стороны
    glMaterialfv(GL_FRONT, GL_SHININESS, material_shininess); // Установить блеск материала для лицевой стороны
}


void on_light(){
    Lightt();
    Materiall();
}

