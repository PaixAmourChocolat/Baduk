#include "Board.h"

Board::Board()
: m_goban(19, std::vector<Stone>(19, Void))
, m_groups(0)
{ }
