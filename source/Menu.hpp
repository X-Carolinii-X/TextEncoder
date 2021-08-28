#pragma once

#include "DataManager.hpp"

/* Klasa reprezentująca menu z wszelkimi dostępnymi opcjami. */
class Menu
{
public:
	constexpr Menu() : isActive{ true }, dataManager{ nullptr } {};

	~Menu()	{ delete dataManager; }

	void ShowGreeting();
	void ShowOptions();
	void ChooseOption();

	bool GetState() const noexcept { return isActive; }

private:
	bool isActive;

	DataManager*	dataManager;
};

