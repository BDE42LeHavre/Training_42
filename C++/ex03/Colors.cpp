#include "Colors.hpp"

/* Colors to call with `Colors::Red` for example */
Color Colors::Black			= {0, 0, 0};
Color Colors::Blue			= {0, 0, 255};
Color Colors::Brown			= {60, 28, 0};
Color Colors::Cyan			= {0, 255, 255};
Color Colors::DarkBrown		= {43, 0, 0};
Color Colors::DarkMagenta	= {139, 0, 139};
Color Colors::DeepPink		= {255, 20, 147};
Color Colors::Green			= {0, 255, 0};
Color Colors::Magenta		= {255, 0, 255};
Color Colors::MistyRose		= {255, 228, 225};
Color Colors::NightBlue		= {25, 25, 112};
Color Colors::Orange		= {255, 145, 0};
Color Colors::Pink			= {255, 192, 203};
Color Colors::Red			= {255, 0, 0};
Color Colors::RoyalBlue		= {65, 105, 225};
Color Colors::Violet		= {255, 0, 255};
Color Colors::White			= {255, 255, 255};
Color Colors::Yellow		= {255, 255, 0};
Color Colors::Gold			= {204, 146, 50};
Color Colors::Teal			= {0, 180, 180};
Color Colors::DarkTeal		= {0, 100, 100};
Color Colors::LightTeal		= {0, 215, 215};
Color Colors::Coral			= {255, 127, 80};
Color Colors::Grey			= {100, 100, 100};

/*
	Returns an error message containing the text in red in a black background.
	@param str The string to show.
*/
std::string	ErrMsg(std::string msg)
{
	std::cout << std::endl << ERRCOLOR << "Error:" << std::endl <<
		std::setw(8) << "" << msg << RESET << std::endl;
	return ("");
}

/* Returns the complete color code with the given parameters. 
	@param r(red) 0 - 255.
	@param g(green) 0 - 255.
	@param b(blue) 0 - 255.
	@param mode (optional) To change the foreground(character) or the background color.
*/
std::string RGB(int r, int g, int b, Mode mode)
{
	std::stringstream ss;
	ss << "\033[" << mode << ";2;" << r << ";" << g << ";" << b << "m";
	return (ss.str());
}

/* Returns the complete color code with the given parameters. 
	@param color The color to apply.
	@param mode (optional) To change the foreground(character) or the background color.
*/
std::string RGB(Color color, Mode mode)
{
	std::stringstream ss;
	ss << "\033[" << mode << ";2;" << color.r << ";" << color.g << ";" << color.b << "m";
	return (ss.str());
}

/* Returns the complete foreground and background color code with the given parameters. 
	@param r(foreground red) 0 - 255.
	@param g(foreground green) 0 - 255.
	@param b(foreground blue) 0 - 255.
	@param bg_r(background red) 0 - 255.
	@param bg_g(background green) 0 - 255.
	@param bg_b(background blue) 0 - 255.
*/
std::string RGB2(int r, int g, int b, int bg_r, int bg_g, int bg_b)
{
	std::stringstream ss;
	ss << "\033[38;2;" << r << ";" << g << ";" << b << ";48;2;"
		<< bg_r << ";" << bg_g << ";" << bg_b << "m";
	return (ss.str());
}

std::string RGB2(Color fg_color, Color bg_color)
{
	std::stringstream ss;
	ss << "\033[38;2;" << fg_color.r << ";" << fg_color.g << ";" << fg_color.b
	<< ";48;2;" << bg_color.r << ";" << bg_color.g << ";" << bg_color.b << "m";
	return (ss.str());
}

/* Keeps the R, G, B values between 0 and 255. */
int	SetMinMax(int value)
{
	if (value < 0)
		value = 0;
	else if (value > 255)
		value = 255;
	return (value);
}
