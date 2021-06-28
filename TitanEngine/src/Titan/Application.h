#pragma once

#include "Core.h"

namespace Titan {

	class TITAN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication(); //defined in client app

}