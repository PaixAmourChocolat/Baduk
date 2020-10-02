#include "Group.h"

Group::Group(Stone color)
: m_container (0)
, m_color (color)
{ }

void Group::add(sf::Vector2u coords)
{
	m_container.push_back(coords);
}

void Group::clean()
{
	m_container.clear();
}

bool Group::contains(sf::Vector2u coords) const
{
	for(const auto& stone : m_container)
	{
		if(stone == coords)
		{
			return true;
		}
	}
	
	return false;
}

Stone Group::getColor() const
{
	return m_color;
}
