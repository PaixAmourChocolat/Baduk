#ifndef GROUP_H_INCLUDED
#define GROUP_H_INCLUDED

#include <SFML/System/Vector2.hpp>
#include <vector>

enum Stone
{
	Void,
	Black,
	White
};

class Group
{
public:
	
	Group(Stone);
	
	void add(sf::Vector2u);
	void clean();
	
	bool contains(sf::Vector2u) const;
	Stone getColor() const;
	
private:
	
	std::vector<sf::Vector2u> m_container;
	Stone m_color;
};

#endif
