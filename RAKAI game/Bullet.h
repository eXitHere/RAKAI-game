#pragma once
#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

class Bullet
{
public:
	Bullet(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed, sf::Vector2f pos);
	~Bullet();
	void update(float deltaTime,Enemy alien1);
	void draw(sf::RenderWindow& window);
	bool isAvaliable();
	void attack(sf::Vector2f pos);

	sf::Vector2f GetPosition() { return body.getPosition(); }
	Collision GetCollider() { return Collision(body); }

private:
	Animation animation;
	float speed;
	sf::RectangleShape body;
	unsigned int row;
	sf::Vector2f velocity;
	bool isAva = true;
};