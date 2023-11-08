#pragma once
#include "common.hpp"
#include "simple_button.hpp"
#include "item_spin_btn.hpp"

class new_game_scene : public App::Scene {

public:

	new_game_scene(const InitData& init);

	void update() override;

	void draw() const override;

private:

	SimpleButton change_title_scene_btn{ {kWindowSize.x * 0.5,kWindowSize.y * 0.7 }, Size{ 150,50 }, U"BACK", Palette::Green };
	SimpleButton game_start_btn{ {kWindowSize.x * 0.675,kWindowSize.y * 0.7 }, Size{ 150,50 }, U"PLAY", Palette::Green };
	ItemSpinButton game_mode_spin_btn{ { kWindowSize.x * 0.3,kWindowSize.y * 0.375},Size { 75,150 },kGameModes,false};
};

