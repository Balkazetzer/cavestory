#ifndef GAME_H
#define GAME_H

#include <Player.h>
#include <Level.h>
#include <Hud.h>
#include <Graphics.h>

class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Player _player;

	Level _level;

	HUD _hud;

	Graphics _graphics;
};

#endif
