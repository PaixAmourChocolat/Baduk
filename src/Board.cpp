#include "Board.h"

Board::Board()
: m_goban(19, std::vector<Stone>(19, Void))
, m_groups(0, Void)
{ }

void Board::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::RectangleShape rectangle;
	
	for (std::size_t i = 1; i < m_goban.size(); ++i)
	{
		for (std::size_t j = 1; j < m_goban[i].size(); ++j)
		{
			rectangle.setSize({800.f/(m_goban.size()+1), 600.f/(m_goban.size()+1)});
			rectangle.setPosition(i*800.f/(m_goban.size()+1), j*600.f/(m_goban.size()+1));
			rectangle.setOutlineColor(sf::Color::Blue);
			rectangle.setOutlineThickness(-1.f);
				
			if (m_goban[i][j])
			{
				rectangle.setFillColor(sf::Color::White);
			}
			else
			{
				rectangle.setFillColor(sf::Color::Black);
			}
			
			target.draw(rectangle, states);
		}
	}
}
