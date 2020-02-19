#include "RollButton.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/RollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 250.0f)), m_isClicked(false)
{

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
			Game::Instance()->changeSceneState(LEVEL1_SCENE);
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