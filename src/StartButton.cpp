#include "StartButton.h"
#include "Game.h"
#include "Util.h"

StartButton::StartButton()
	// call super constructor
	:Button(
		"../Assets/textures/StartButton.png",
		"startButton",
		START_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{
	
}

StartButton::~StartButton()
{
}

bool StartButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if(!m_isClicked)
		{

			int dice1 = Util::RandomRange(1, 6);
			int dice2 = Util::RandomRange(1, 6);
			std::cout << dice1 << std::endl;
			std::cout << dice2 << std::endl;
			
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


