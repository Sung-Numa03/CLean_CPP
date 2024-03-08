#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1; 
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	const void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	const void Error(const char* message)
	{	
		if (m_LogLevel >= LogLevelError)
		 std::cout << "[Error]" << message << std::endl;
	}
	const void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
		 std::cout << "[Warning]" << message << std::endl;
	}
	const void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info]" << message << std::endl;
	}
};


int main()
{
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Error("Hello!");
	log.Warn("Hello!");
	log.Info("Hello!");

	std::cin.get();
}