#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <SFML/Graphics.hpp>

class Game
{
public:
	
	Game();
	
	void run();
	
private:
	
	void processEvents();
	void update();
	void render();
	
private:
	
	sf::RenderWindow m_window;
};

#endif
