#pragma once

#include "KeyType.h"
#include "KeyTypeMap.h"

namespace dsinput {
	class Key {
	public:
		// Pressed key code
		std::size_t code = 0;

		// Pressed key type
		KeyType keyType = KeyType::SPACE;

	public:
		Key(const unsigned char code, const KeyType& type) : code(code), keyType(type) {}
		Key(const unsigned char code) : code(code) {
			if (KeyTypeMap.find(code) == KeyTypeMap.end()) {
				// TODO: write exception class!
				throw "Key(const unsigned char) ctor exception : failed to match passed code with KeyTypeMap codes";
			}

			keyType = KeyTypeMap.at(code);
		}

		//bool operator==(const Key& lhs, const Key& rhs);
	};

	inline bool operator==(const Key& lhs, const Key& rhs) {
		return (lhs.code == rhs.code && lhs.keyType == rhs.keyType);
	}

	inline bool operator!=(const Key& lhs, const Key& rhs) {
		return !(lhs == rhs);
	}

}