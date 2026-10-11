cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 20)

add_executable(ComeecCLI)

target_sources(ComeecCLI
	PRIVATE
	main.cpp
	menu.cpp
)

target_link_libraries(ComeecCLI
	PRIVATE 
		ComeecLibrary
)

