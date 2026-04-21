#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"

class Ball {
public:
	Ball(float x, float y, float radius, float speedX, float speedY) : x(x), y(y), radius(radius), speedX(speedX), speedY(speedY) {
		shape.setRadius(radius);
		shape.setFillColor(sf::Color::Green);
		shape.setPosition(x - radius, y - radius);
	}
	void update() {
		x += speedX;
		y += speedY;
		if (x - radius < 0 || x + radius > 800) {
			speedX = -speedX;
		}
		if (y - radius < 0 || y + radius > 600) {
			speedY = -speedY;
		}
		shape.setPosition(x - radius, y - radius);
	}
	void draw(sf::RenderWindow& window) {
		window.draw(shape);
	}
private:
	float x, y;
	float radius;
	float speedX, speedY;
	sf::CircleShape shape;
};