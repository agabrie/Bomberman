#ifndef _Bombs_hpp_
#define _Bombs_hpp_

#include "Map.hpp"
#include "Player.hpp"

#include <list>

struct sBomb
{
	sf::Vector2i position;
	float timeLeft;
};

struct sFlame
{
	sf::Vector2i position;
	float timeLeft;
};

class Bombs
{
private:
	std::list<sBomb> _bombs;
	std::list<sFlame> _flames;

public:
	static int bomb_range;
	static int max_bombs;
	
	Bombs();
	void placeBomb(const Player &player, Map &map);
	void placeFlame(sf::Vector2i pos, Map &map);
	void bombExplodeDirection(Map &map, sf::Vector2i pos, sf::Vector2i dir);
	void update(float deltaTime, Map &map);
	void updateMap(Player &player, Map &map);
};

#endif
