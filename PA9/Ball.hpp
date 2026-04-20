#pragma once

#include <SFML/Graphics.hpp>

class Ball : sf::CircleShape {
public:
	ball(const sf::vector2f& radius, const sf::Vector2f& pos, const sf::Color& ballColor) : sf::CircleShape(radius) {
		this->radius = radius;
		setPosition(pos);
		setFillColor(ballColor);
	}	

}