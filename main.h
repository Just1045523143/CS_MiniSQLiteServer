﻿#pragma once

#define ZeroMemory(Destination,Length) memset((Destination),0,(Length))

//#define BOOST_ASIO_ENABLE_HANDLER_TRACKING // for asio debuging
//#define GOOGLE_STRIP_LOG 0 // cut all glog strings from .exe

#include <string>

extern std::string dbPath;

int main(int argc, char *argv[]);

void SafeExit();

template <typename T, std::size_t N>
constexpr std::size_t countof(T const (&)[N]) noexcept
{
    return N;
}