#include <SFML/Graphics.hpp>
#include "Bat.h"
#include "Ball.h"

using namespace sf;


int main()
{
    sf::RenderWindow window(sf::VideoMode(1920,1080), "Pong!",Style::Fullscreen);
    
    Bat bat(1920.f * 0.5, 1080.f - 20.f);
    Ball ball(1920.f * 0.5, 0.f);
    Clock clock;
    bool prevSide = false; //이전프레임 저장
    bool prevTop = false;
    bool prevbat = false;
    while (window.isOpen())
    {
        Time dt = clock.restart();
        float deltaTime = dt.asSeconds();
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //input
        Sides dir = Sides::NONE;

        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            dir = Sides::LEFT;
        }
        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            dir = Sides::RIGHT;
        }
        bat.SetMoveDir(dir);

        FloatRect ballBound = ball.GetGlobalBounds();
        Vector2u windowSize = window.getSize();
        
        bool colSide = ballBound.left < 0.f || ballBound.left + ballBound.width > windowSize.x;
        bool colTop = ballBound.top < 0.f;
        bool colBat = ballBound.intersects(bat.GetGlobalBounds());
        if (!prevSide && colSide)
        {
            ball.ReboundSides();
        }
        if (!prevTop && colTop)
        {
            ball.ReboundBatOrTop();
        }
        if (!prevbat && colBat)
        {
            ball.ReboundBatOrTop();
        }

        else if (ballBound.top + ballBound.height > windowSize.y)
        {
            ball.ReboundBottom();
        }
        prevSide = colSide;
        prevTop = colTop;
        prevbat = colBat;
        
        //update
        bat.Update(deltaTime);
        ball.Update(deltaTime);
        //draw
        window.clear();
        window.draw(bat.GetShape());
        window.draw(ball.GetShape());
        window.display();
    }

    return 0;
}