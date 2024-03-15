#ifndef COLORS_HPP
# define COLORS_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdarg>
#include <sstream>

// Black background with red font color
#define ERRCOLOR RGB2(Colors::Red, Colors::Black)

// Custom colors
#define LIGHTRED		"\033[38;2;255;100;100m"
#define LIME			"\033[38;2;165;255;0m"
#define DARKTEAL		"\033[38;2;0;100;100m"
#define TEAL			"\033[38;2;0;180;180m"
#define LIGHTTEAL		"\033[38;2;0;215;215m"
#define ROSERED			"\033[38;2;255;0;93m"
#define GOLD			"\033[38;2;204;146;50m"
#define ORANGE			"\033[38;2;255;145;0m"
#define BROWN			"\033[38;2;60;28;0m"
#define CORAL			"\033[38;2;255;127;80m"
#define GREY			"\033[38;2;100;100;100m"

// Text Styles
#define RESET			"\033[0m"
#define BOLD			"\033[1m"
#define DIM				"\033[2m"
#define ITALIC			"\033[3m"
#define UNDERLINE		"\033[4m"
#define BLINK_SLOW		"\033[5m"
#define BLINK_RAPID		"\033[6m"
#define REVERSE_VIDEO	"\033[7m"
#define CONCEALED		"\033[8m"
#define CROSSED_OUT		"\033[9m"

// Text Colors
#define BLACK			"\033[0;30m"
#define RED				"\033[0;31m"
#define GREEN			"\033[0;32m"
#define YELLOW			"\033[0;33m"
#define BLUE			"\033[0;34m"
#define MAGENTA			"\033[0;35m"
#define CYAN			"\033[0;36m"
#define WHITE			"\033[0;37m"

// Background Colors
#define BG_BLACK		"\033[40m"
#define BG_RED			"\033[41m"
#define BG_GREEN		"\033[42m"
#define BG_YELLOW		"\033[43m"
#define BG_BLUE			"\033[44m"
#define BG_MAGENTA		"\033[45m"
#define BG_CYAN			"\033[46m"
#define BG_WHITE		"\033[47m"

struct Color
{
	int r, g, b;
};

class Colors
{
	public:
		static Color Blue;
		static Color Violet;
		static Color Cyan;
		static Color Red;
		static Color Green;
		static Color White;
		static Color Black;
		static Color Orange;
		static Color Brown;
		static Color DarkBrown;
		static Color RoyalBlue;
		static Color NightBlue;
		static Color Magenta;
		static Color DarkMagenta;
		static Color Yellow;
		static Color MistyRose;
		static Color Pink;
		static Color DeepPink;
		static Color Gold;
		static Color Teal;
		static Color DarkTeal;
		static Color LightTeal;
		static Color Coral;
		static Color Grey;
};

typedef enum color_mode
{
	foreground = 38,
	background = 48
}				Mode;

int	SetMinMax(int value);
std::string	ErrMsg(std::string msg);
/*
	To cast an int/double/float or anything that is compatible into a `std::string`
*/
template <typename T>
std::string to_str(const T& value)
{
    std::ostringstream os;
    os << value;
    return os.str();
}
std::string		RGB(Color color, Mode mode = foreground);
std::string		RGB(int r, int g, int b, Mode mode = foreground);
std::string		RGB2(int r, int g, int b, int bg_r, int bg_g, int bg_b);
std::string		RGB2(Color fg_color, Color bg_color);

static inline std::string ApplyColor(Color &toColor, Color &fromColor, size_t &i, size_t length, std::string &str, double div, Mode mode)
{
	double		r_off, g_off, b_off;
	Color		color;
	std::stringstream ss;

	r_off = (toColor.r - fromColor.r) / div;
	g_off = (toColor.g - fromColor.g) / div;
	b_off = (toColor.b - fromColor.b) / div;
	for (size_t j = 0; j < div; j++)
	{
		if (i == length)
			break ;
		color.r = fromColor.r + r_off * (j + 1);
		color.g = fromColor.g + g_off * (j + 1);
		color.b = fromColor.b + b_off * (j + 1);
		ss << "\033[" << mode << ";2;"
			<< SetMinMax(color.r) << ";"
			<< SetMinMax(color.g) << ";"
			<< SetMinMax(color.b) << "m" << str[i] << "\033[0m";
		i++;
	}
	fromColor = toColor;
	return ss.str();	
}

/* Returns a string with color gradients between each color.
	@param arg The string/int/anything to be printed.
	@param mode To change the foreground(character) or the background color.
	@param count The amount of colors to be calculated.
	@param ... The colors (ex: `Colors::Red`).
*/
template <typename T>
std::string		ToColor(T arg, Mode mode, size_t count, ...)
{
	std::string str = to_str(arg);
	std::stringstream ss;
	va_list		va;
	Color		fromColor, toColor;
	size_t		length = str.length();
	double		div = (double)length / (count - 1);
	size_t		i = 0;

	if (count <= 1)
		return (ErrMsg("You must put at least 2 colors!"));
	if (length < count)
		return (ErrMsg("You must put less colors than the total character count!"));
	va_start(va, count);
	fromColor = va_arg(va, Color);
	while (i < length)
	{
		toColor = va_arg(va, Color);
		ss << ApplyColor(toColor, fromColor, i, length, str, div, mode);
	}
	va_end(va);
	return (ss.str());
}

/* Returns a string with color gradients between each color.
	@param arg The string/int/anything to be printed.
	@param count The amount of colors to be calculated.
	@param ... The colors (ex: `Colors::Red`).
*/
template <typename T>
std::string		ToColor(T arg, size_t count, ...)
{
	std::string str = to_str(arg);
	std::stringstream ss;
	va_list		va;
	Color		fromColor, toColor;
	size_t		length = str.length();
	double		div = (double)length / (count - 1);
	size_t			i = 0;

	if (count <= 1)
		return (ErrMsg("You must put at least 2 colors!"));
	if (length < count)
		return (ErrMsg("You must put less colors than the total character count!"));
	va_start(va, count);
	fromColor = va_arg(va, Color);
	while (i < length)
	{
		toColor = va_arg(va, Color);
		ss << ApplyColor(toColor, fromColor, i, length, str, div, foreground);
	}
	va_end(va);
	return (ss.str());
}

/* Returns a string with color gradients between both colors.
	@param arg The string/int/anything to be printed.
	@param mode To change the foreground(character) or the background color.
	@param start The starting color.
	@param end The final color.
*/
template <typename T>
std::string		ToColor(T arg, Mode mode, Color start, Color end)
{
	return (ToColor(arg, mode, 2, start, end));
}

/* Returns a string with color gradients between both colors.
	@param arg The string/int/anything to be printed.
	@param start The starting color.
	@param end The final color.
*/
template <typename T>
std::string		ToColor(T arg, Color start, Color end)
{
	return (ToColor(arg, 2, start, end));
}

/* Returns a string with beautiful rainbow colors! 
	@param arg The string/int/anything to be printed.
	@param mode (optional) To change the foreground(character) or the background color.
*/
template <typename T>
std::string Rainbow(T arg, Mode mode = foreground)
{
	return (ToColor(arg, mode, 7, Colors::Red, Colors::Yellow, Colors::Green, Colors::Cyan, Colors::Blue, Colors::Violet, Colors::Red));
}
#endif