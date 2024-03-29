#ifndef CONTROLMETEORO_H
#define CONTROLMETEORO_H
#include "Meteoro.h"
#include "SFML\Graphics.hpp"
#include "Player.h"
#include <iostream>
#include <array>
#include <time.h>
#define TAM 15
class ControlMeteoro
{
	std::array<Meteoro*, TAM> grupo;
	int contador;
	int cuentaMet;
	bool *playing;
	float tempo;
	Player *jugador;
	sf::RenderWindow *window;
public:
	ControlMeteoro(sf::RenderWindow &_window, Player &_jugador, bool &_playing);
	void Update(float update);
	void Contacto();
	~ControlMeteoro();
};
#endif // !CONTROLMETEORO_H

