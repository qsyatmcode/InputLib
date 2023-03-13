#pragma once

#include "Key.h"
#include "KeyTypeMap.h"


namespace dsinput {
	class InputHandler {
	public:
		// нажатие клавиши
		Key ReadKey();

	};
}