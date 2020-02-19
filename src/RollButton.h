#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__

#include "Button.h"

class RollButton : public Button
{
public:
	RollButton();
	~RollButton();
	int x = 0;
	int y = 0;

	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__ROLL_BUTTON__) */