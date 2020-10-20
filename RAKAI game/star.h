#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Animation.h"
#include "Collision.h"

class star
{
public:
	star(sf::Texture* texture, sf::Vector2u imageCount, float switchTime,float x,float y);
	~star();
	void update(float deltaTime, Player player);
	void draw(sf::RenderWindow& window);

	Collision GetCollider() { return Collision(body); }

private:
	int row;
	sf::RectangleShape body;
	Animation animation;
};
