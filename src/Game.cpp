#include "Game.h"

Game::Game()
: m_window (sf::VideoMode(800.f, 600.f), "Play Go !", sf::Style::Close)
{ }

void Game::run()
{
	sf::Time elapsed = sf::Time::Zero;
	sf::Clock clock;
	
	while(m_window.isOpen())
	{
		processEvents();
		
		elapsed += clock.restart();
		while(elapsed >= GameTick)
		{
			elapsed -= GameTick;
			
			processEvents();
			update(GameTick);
		}
		
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

void Game::update(sf::Time dt)
{
	
}

void Game::render()
{
	m_window.clear();
	m_window.display();
}
