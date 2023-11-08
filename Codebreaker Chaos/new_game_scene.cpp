#include "new_game_scene.hpp"

new_game_scene::new_game_scene(const InitData& init)
	: IScene{ init } {}

void new_game_scene::update() {
	change_title_scene_btn.update();
	game_start_btn.update();
	game_mode_spin_btn.update();
}

void new_game_scene::draw() const {
	change_title_scene_btn.draw();
	game_start_btn.draw();
	game_mode_spin_btn.draw();
}
