#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    RenderWindow window(
        VideoMode({1920, 1080}, 64),
        "Monkey-Typer",
        Style::Default,
        State::Windowed,
        ContextSettings{.antiAliasingLevel = 8}
        );

    while (window.isOpen()) {
        while (auto const event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        window.clear(Color::Black);
        window.display();
    }
}
