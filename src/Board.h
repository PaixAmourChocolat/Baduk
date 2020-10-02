#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <SFML/Graphics.hpp>
#include <utility>
#include "Group.h"

class Board : public sf::Drawable
{
public:
	
	Board();
	
	void update();
	
	sf::Vector2f calculateScore() const;
	
	void putStone(sf::Vector2u, Stone);
	
private:
	
	void draw(sf::RenderTarget&, sf::RenderStates) const override;
	
	bool checkCollision(std::size_t, std::size_t) const;
	
	void updateGroups();
	
private:
	
	std::vector<std::vector<Stone>> m_goban;
	std::vector<Group> m_groups;
}

#endif
