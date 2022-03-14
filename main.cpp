#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;

void circlearea(int d, int b);

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;

    int xpos = 0;
    int ypos = 0;
    int xpos2 = 20;
    int ypos2 = 20;
    int size = 50;
    int size2 = 30;
    circlearea(size, size2);

    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                circle.setRadius(size);
                circle.setFillColor((sf::Color(200, 50, 100, 100)));
                circle.setPosition(xpos + i * 100, ypos + j * 100);
                window.draw(circle);

            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                circle.setRadius(size2);
                circle.setFillColor((sf::Color(0, 150, 100, 200)));
                circle.setPosition(xpos2 + i * 100, ypos2 + j * 100);
                window.draw(circle);

            }
        }
        window.display();
        
    }//end game loop-------------------------------------------------

    return 0;
} //end main

void circlearea(int d, int b) {
    int r = d / 2;
    int j = b / 2;
    cout <<"your area for your red circle is "<< 3.14 * (r * r);
    cout << "your area for your green circle is " << 3.14 * (j * j);
}
