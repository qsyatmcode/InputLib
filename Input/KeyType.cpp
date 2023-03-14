#include "pch.h"
#include "KeyType.h"

std::string dsinput::KeyTypeToString(KeyType type) {// TODO: L|R SHIFT, L|R CTRL
	std::map<KeyType, std::string> typeStrings{
		{KeyType::ARROW_UP, "ARROW_UP"},
		{KeyType::ARROW_DOWN, "ARROW_DOWN"},
		{KeyType::ARROW_LEFT, "ARROW_LEFT"},
		{KeyType::ARROW_RIGHT, "ARROW_RIGHT"},
		{KeyType::ENTER, "ENTER"},
		{KeyType::SPACE, "SPACE"},
		{KeyType::ENTER, "ESCAPE"},
		{KeyType::ASCII, "ASCII"},
		{KeyType::TAB, "TAB"},
		{KeyType::BACKSPACE, "BACKSPACE"},
		{KeyType::PAGE_DOWN, "PAGE_DOWN"},
		{KeyType::PAGE_UP, "PAGE_UP"}
	};
	return typeStrings[type];
}