#include "title_scene.hpp"

title_scene::title_scene(const InitData& init)
	: IScene{ init } {}

void title_scene::update(){

	if (9s <= stop_watch) {
		new_game_button.update();
		last_game_load_button.update();
		exit_button.update();

		if (new_game_button.is_click()) {
			changeScene(State::CreateGame);
		}
		if (last_game_load_button.is_click()) {
			changeScene(State::ViewGameDates);
		}
		if (exit_button.is_click()) {
			System::Exit();
		}
	}
}

void title_scene::draw() const {

	if (3s >= stop_watch) {
		FontAsset(U"title-font")(kGameTitle).drawAt(Scene::Center().movedBy(7,7), Palette::Black);
		FontAsset(U"title-font")(kGameTitle).drawAt(Scene::Center(),Palette::Green);
	}
	else if (6s >= stop_watch) {
		FontAsset(U"default-font")(kGameTitleCautionMsg).drawAt(Scene::Center().movedBy(5, 5), Palette::Black);
		FontAsset(U"default-font")(kGameTitleCautionMsg).drawAt(Scene::Center(), Palette::Green);
	}
	else {

		FontAsset(U"title-font")(kGameTitle).drawAt(Scene::Center().movedBy(-7, -143), Palette::Black);
		FontAsset(U"title-font")(kGameTitle).drawAt(Scene::Center().movedBy(0,-150), Palette::Green);

		new_game_button.draw();
		last_game_load_button.draw();
		exit_button.draw();
	}
}
