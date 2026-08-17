#pragma once



#ifdef HAZEL_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HAZEL_CORE_ERROR("NIGGA");
	HAZEL_TRACE("CHIGGA");
	int a = 5;
	HAZEL_WARN("nigga is nigga, {0}", a);
	HAZEL_CORE_INFO("nigga isn't nigga, {0}, {1}", a, 3);
	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif
