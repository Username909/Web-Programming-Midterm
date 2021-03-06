#include "RollButton.h"
#include "Util.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/RollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 250.0f)), m_isClicked(false)

{
	TheSoundManager::Instance()->load("../Assets/audio/yay.ogg", "yay", SOUND_SFX);
}
RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
		
			int dice1 = Util::RandomRange(1, 6);
			int dice2 = Util::RandomRange(1, 6);
			x = dice1;
			y = dice2;
			std::cout << dice1 << std::endl;
			std::cout << dice2 << std::endl;
			TheSoundManager::Instance()->playSound("yay",0);
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}