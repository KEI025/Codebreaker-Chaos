#pragma once
#include "common.hpp"

class ItemSpinButton {

public:

	ItemSpinButton(const Vec2& pos,const Size& size,const Array<String>& items,const bool& items_loop)
		: pos { pos },
		  size { size },
		  items { items },
		  items_loop { items_loop }{}

	void update() {

	}

	void draw() const {

	}

	String get_seting_item() const {

	}


private:

	Vec2 pos;
	Size size;
	Array<String> items;
	bool items_loop;
};
