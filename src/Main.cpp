#include <SFML/Graphics.hpp>

// Please don't kill me...
using namespace sf;

Vector2f operator -(const Vector2f &l, const Vector2f &r)
{ return { l.x - r.x, l.y - r.y }; }

Vector2f operator /(const Vector2f &l, float r)
{ return { l.x / r, l.y / r }; }

int main(int nArgs, char *args[])
{
	RenderWindow wnd({ 512, 512 }, "Nacre Tower Defence - Treidex");

	CircleShape circle(100, 12);
	circle.setPosition(wnd.getView().getCenter() - Vector2f(circle.getRadius(), circle.getRadius()));
	circle.setFillColor(Color(0xFbF4E2FF));
	while (wnd.isOpen())
	{
		Event e;
		while (wnd.pollEvent(e))
		{
			if (e.type == Event::Closed)
				wnd.close();
		}

		wnd.clear(Color(0x404040FF));
		wnd.draw(circle);
		wnd.display();
	}
}