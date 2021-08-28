#pragma once

/* Klasa reprezentująca menu z wszelkimi dostępnymi opcjami. */
class Menu
{
public:
	constexpr Menu() : isActive{ true } {};

	void ShowGreeting();
	void ShowOptions();
	void ChooseOption();

	bool GetState() const noexcept { return isActive; }

private:
	bool isActive;
};

