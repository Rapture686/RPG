#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	double posX;
	double posY;

	int direction;

	double velX;
	double velY;

	const int LEFT = -1;
	const int RIGHT = 1;

public:
	const double PLAYER_VELOCITY = 5;
	const int PLAYER_HEIGHT = 10;
	const int PLAYER_WIDTH = 10;

	void inputHandler(SDL_Event event);
	void move(SDL_Event event);
	void attack(); //will take direction and posx/posy
	void pickUp(); //takes direction

	void checkCollision(SDL_Rect player, SDL_Rect square);
};



#endif