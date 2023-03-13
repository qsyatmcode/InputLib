#pragma once

#include "KeyType.h"

namespace dsinput {

	// Asotiate with getch() return codes
	const std::map<int, KeyType> KeyTypeMap = {
				{72, KeyType::ARROW_UP, },
				{80, KeyType::ARROW_DOWN},
				{75, KeyType::ARROW_LEFT},
				{77, KeyType::ARROW_RIGHT},
				{13, KeyType::ENTER},
				{32, KeyType::SPACE},
				{27, KeyType::ESCAPE},
				{0, KeyType::ASCII},
				{9, KeyType::TAB},
				{8, KeyType::BACKSPACE}
	};

}