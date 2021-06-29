#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern Titan::Application* Titan::CreateApplication();

int main(int argc, char** argv	)
{
	Titan::Log::Init();
	TE_CORE_WARN("Initialised log!");
	TE_INFO("Hello!");

	auto app = Titan::CreateApplication();
	app->Run();
	delete app;
}

#endif