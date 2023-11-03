#pragma once
#include <Siv3D.hpp> // OpenSiv3D v0.6.10

enum class State{

	Title,
	NewGame,
	Game,
	Configs,
};

struct GameDate
{

};

using App = SceneManager<State, GameDate>;
