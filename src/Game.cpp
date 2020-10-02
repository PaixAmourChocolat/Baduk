#include "Game.h"

void Game::run()
{
	while(m_window.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	
	while(m_window.pollEvent(event))
	{
		if(event.type == sf::EventType::Closed)
		{
			m_window.close();
		}
	}
}

void Game::update()
{
	
}

void Game::render()
{
	m_window.clear();
	m_window.draw();
}
