#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Titan {
	class TITAN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define TE_CORE_TRACE(...)   ::Titan::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TE_CORE_INFO(...)     ::Titan::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TE_CORE_WARN(...)   ::Titan::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TE_CORE_ERROR(...)  ::Titan::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TE_CORE_FATAL(...)    ::Titan::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define TE_TRACE(...)    ::Titan::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TE_INFO(...)      ::Titan::Log::GetClientLogger()->info(__VA_ARGS__)
#define TE_WARN(...)    ::Titan::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TE_ERROR(...)   ::Titan::Log::GetClientLogger()->error(__VA_ARGS__)
#define TE_FATAL(...)     ::Titan::Log::GetClientLogger()->fatal(__VA_ARGS__)