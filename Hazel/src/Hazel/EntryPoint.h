#pragma once



#ifdef HAZEL_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	printf("Hazel is running");
	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif
