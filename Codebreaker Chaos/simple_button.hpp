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

		RectF btn{ pos.movedBy(-1 * (size.x / 2),-1 * (size.y / 2)),size };

		btn.drawFrame(2, color);

		FontAsset(U"default-font")(text).drawAt(pos,btn.mouseOver()? Palette::Whitesmoke : color);
	}

	bool is_click() const {

		bool mouse_in = RectF{ pos.movedBy(-1 * (size.x / 2),-1 * (size.y / 2)),size }.mouseOver();
		bool mouse_click = MouseL.pressed();

		return (mouse_in && mouse_click);
	}

private :

	Vec2 pos;
	Size size;
	String text;
	Color color;
};
