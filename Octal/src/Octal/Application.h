#pragma once

#include "Core.h"

namespace Octal {
	
	class OCTAL_API Application {
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// To be defined in client
	Application* createApplication();

}
