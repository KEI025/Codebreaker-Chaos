#pragma once
#include "common.hpp"

class SimpleButton {

public:

	SimpleButton(const Vec2& pos, const Size& size, const String& text, const Color& color)
		: pos{ pos },
		  size { size },
		  text { text },
		  color { color }{}

	void update() {

	}

	void draw() const {

		RectF{ pos.movedBy(-1*(size.x / 2),-1*(size.y / 2)),size}.drawFrame(2, color);

		FontAsset(U"default-font")(text).drawAt(pos,color);
	}

	bool is_click() const {
		return false;
	}

private :

	Vec2 pos;
	Size size;
	String text;
	Color color;
};
