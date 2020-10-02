#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <SFML/Graphics.hpp>
#include "Board.h"

class Game
{
public:
	
	Game();
	
	void run();
	
private:
	
	void processEvents();
	void update(sf::Time);
	void render();
	
private:
	
	sf::RenderWindow m_window;
	
	const sf::Time GameTick = sf::seconds(1.f / 60.f);
	
	Board m_board;
};

#endif
