#include "Ball.hpp"
#include <cmath>

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */

void Ball::setVelocity(const Velocity& velocity) { n_velocity = velocity;}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const { return n_velocity;}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const { painter.draw(n_center, n_radius, n_color);}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) { n_center = center;}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const { return n_center;}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const { return n_radius;}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    const double PI = 3.14;
    
    double R = getRadius();
    double n_mass = 4*PI*R*R*R/3;
    return n_mass;
}
