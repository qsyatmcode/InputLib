#pragma once

namespace dsinput {
	enum KeyType {
		ARROW_UP,
		ARROW_DOWN,
		ARROW_LEFT,
		ARROW_RIGHT,
		ENTER,
		SPACE,
		ESCAPE,
		ASCII,
		TAB, // graph
		BACKSPACE,
		PAGE_DOWN,
		PAGE_UP
	};

	// KeyType to string representation
	std::string KeyTypeToString(KeyType type);
}