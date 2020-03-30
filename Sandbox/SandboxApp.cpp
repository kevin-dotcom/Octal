#include <Octal.h>

class Sandbox : public Octal::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Octal::Application* Octal::createApplication() {
	return new Sandbox();
}