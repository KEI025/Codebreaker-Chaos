#pragma once
#include "common.hpp"

class title_scene : public App::Scene {

public:

	title_scene(const InitData& init);

	void update() override;

	void draw() const override;

private:


};

