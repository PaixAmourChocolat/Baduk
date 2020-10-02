#include "Game.h"

Game::Game()
: m_window (sf::VideoMode(640.f, 480.f), "Play Go !", sf::Style::Close)
{ }

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
		if(event.type == sf::Event::Closed)
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
	m_window.display();
}
