#pragma once

#include "KeyType.h"

namespace dsinput {
	class Key {
	public:
		// Pressed key code
		std::size_t code = 0;

		// Pressed key type
		KeyType keyType = KeyType::SPACE;

	public:
		Key(const unsigned char code, const KeyType type) : code(code), keyType(type) {}
		Key(const unsigned char code) : code(code) {}
	};
}