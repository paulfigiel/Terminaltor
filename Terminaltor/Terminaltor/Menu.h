#pragma once
#include <vector>
#include "Button.h"
#include "InputHandler.h"

class Menu : public InputHandler
{
public:
	Menu();
	~Menu();

	void Up();
	void Down();
	void Enter() { m_buttons[m_index].Push(); };
	inline std::vector<Button>& Buttons() { return m_buttons; };
	inline int Index() { return m_index; };

	inline Menu& operator<<(Button& button) { m_buttons.push_back(button); return *this; };

private:
	std::vector<Button> m_buttons;
	int m_index;
};

