#include "pch.h"
#include "InputHandler.h"

using namespace std;


int main() {
	dsinput::InputHandler handler;
	while (true) {
		auto key = handler.ReadKey();
		cout << dsinput::KeyTypeToString(key.keyType) << endl;
	}
}