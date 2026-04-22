#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include <string>
#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 600

/*
makes the side bare that holds
	-health
	-score
	-pause botten
	-timer
*/


class statsBorder {
public:
	statsBorder() {//makes the bar
		shape.setSize(sf::Vector2f(static_cast<float>(WINDOW_HEIGHT), static_cast<float>(WINDOW_HEIGHT)));//sets the size
		shape.setFillColor(sf::Color::White);//color
		shape.setPosition(0.f, 0.f);//position
		}
	void draw(sf::RenderWindow& window) {//draws the object to screen
		window.draw(shape);
	}
private:
	sf::RectangleShape shape;//back ground object

};




