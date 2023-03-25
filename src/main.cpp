#include <SFML/Graphics.hpp>
#include <vector>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Falling Balls");

    std::vector<sf::CircleShape> balls;
    for (int i = 0; i < 5; i++) {
        sf::CircleShape ball(20.f);
        ball.setFillColor(sf::Color::Red);
        ball.setPosition(150.f * i + 200.f, 100.f);
        balls.push_back(ball);
    }

    const float gravity = 29.8f;
    float deltaTime = 0.0f;
    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        deltaTime = clock.restart().asSeconds();
        
        for (sf::CircleShape &ball : balls) {
            float newY = ball.getPosition().y + gravity * deltaTime;
            if (newY + ball.getRadius() * 2 > window.getSize().y) {
                newY = window.getSize().y - ball.getRadius() * 2;
            }
            ball.setPosition(ball.getPosition().x, newY);
        }

        window.clear(sf::Color::Black);
        for (const sf::CircleShape &ball : balls) {
            window.draw(ball);
        }
        window.display();
    }

    return 0;
}
