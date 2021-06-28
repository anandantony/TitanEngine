#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern Titan::Application* Titan::CreateApplication();

int main(int argc, char** argv	)
{
	auto app = Titan::CreateApplication();
	app->Run();
	delete app;
}

#endif