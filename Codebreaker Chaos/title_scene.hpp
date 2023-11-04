#pragma once
#include "common.hpp"
#include "simple_button.hpp"

class title_scene : public App::Scene {

public:

	title_scene(const InitData& init);

	void update() override;

	void draw() const override;

private:

	Stopwatch stop_watch{ StartImmediately::Yes };
	SimpleButton new_game_button{ Scene::Center().movedBy(0,50),Size{150,50},U"初めから[N]",Palette::Green};
	SimpleButton last_game_load_button { Scene::Center().movedBy(0,120),Size{150,50},U"続きから[C]",Palette::Green };
	SimpleButton exit_button{ Scene::Center().movedBy(0,190),Size{150,50},U"終了する[E]",Palette::Green };
};

