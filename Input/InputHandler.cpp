#include "pch.h"
#include "InputHandler.h"

using namespace dsinput;

Key InputHandler::ReadKey() {
	while(true) {
		if (_kbhit()) {
			char c = _getch();

			if (c == -32) {
				c = _getch();

				return Key(c, KeyTypeMap.at(c));
			}
			if (std::isgraph(c)) { // if input char is graphic (has a graphical representation)
				return Key(c, KeyTypeMap.at(0));
			}
			else
			{
				if (KeyTypeMap.find(c) == KeyTypeMap.end()) continue;

				return Key(c, KeyTypeMap.at(c));
			}
		}
	}
}
