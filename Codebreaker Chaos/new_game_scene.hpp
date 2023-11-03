#pragma once
#include "common.hpp"

class new_game_scene : public App::Scene {

public:

	new_game_scene(const InitData& init);

	void update() override;

	void draw() const override;

private:


};

