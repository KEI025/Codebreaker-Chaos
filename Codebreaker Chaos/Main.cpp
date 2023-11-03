#pragma once
#include "common.hpp"
#include "title_scene.hpp"
#include "new_game_scene.hpp"
#include "game_scene.hpp"
#include "configs_scene.hpp"

void Main() {

	App manager;

	manager.add<title_scene>(State::Title);
	manager.add<new_game_scene>(State::NewGame);
	manager.add<game_scene>(State::Game);
	manager.add<configs_scene>(State::Configs);

	while (System::Update()) {
		if (not manager.update()) {
			break;
		}
	}
}
