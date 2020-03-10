#pragma once

#ifdef OC_PLATFORM_WINDOWS

extern Octal::Application* Octal::createApplication();

int main(int argc, char** argv) {
	printf("Octal Engine");

	auto app = Octal::createApplication();

	app->run();

	delete app;
}

#endif