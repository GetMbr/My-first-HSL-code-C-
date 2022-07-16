/* hsl.cpp by GetMbr, please do not skid! */
#include <Windows.h>

#define Integer int

Integer red, green, blue;
bool ifcolorblue = false, ifblue = false;
COLORREF Hue(Integer length) {
	if (red != length) {
		red < length; red++;
		if (ifblue == true) {
			return RGB(red, 0, length);
		}
		else {
			return RGB(red, 0, 0);
		}
	}
	else {
		if (green != length) {
			green < length; green++;
			return RGB(length, green, 0);
		}
		else {
			if (blue != length) {
				blue < length; blue++;
				return RGB(0, length, blue);
			}
			else {
				red = 0; green = 0; blue = 0;
				ifblue = true;
			}
		}
	}
}

int main() { 
   // Use this code inside CreateSolidBrush Function.


}