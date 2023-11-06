#pragma once
#include <Siv3D.hpp> // OpenSiv3D v0.6.10
#include "configs.hpp"

enum class State{

	Title,
	CreateGame,
	ViewGameDates,
	Game,
	Configs,
};

struct GameDate
{

};

using App = SceneManager<State, GameDate>;
