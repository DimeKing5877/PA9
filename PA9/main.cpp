#include "Ball.hpp"
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Bouncing Ball");
	Ball ball(400, 300, 20, 5, 5);
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		ball.update();
		window.clear();
		ball.draw(window);
		window.display();
	}
	return 0;
}