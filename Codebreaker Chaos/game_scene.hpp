#pragma once
#include "common.hpp"

class game_scene : public App::Scene {

public:

	game_scene(const InitData& init);

	void update() override;

	void draw() const override;

private:


};

