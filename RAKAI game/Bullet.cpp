#include "Bullet.h"

Bullet::Bullet(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed, sf::Vector2f pos) :
	animation(texture, imageCount, switchTime)
{
	this->speed = speed;
	row = 0;
	body.setSize(sf::Vector2f(50.0f, 50.0f));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(pos);
	body.setTexture(texture);
}
Bullet::~Bullet()
{
}
void Bullet::update(float deltaTime)
{
	velocity.y = 0;
	velocity.x += speed;
	body.move(velocity * deltaTime);
	animation.updateBu(row, deltaTime);
	body.setTextureRect(animation.uvRect);
}
void Bullet::draw(sf::RenderWindow& window)
{
	window.draw(body);
}