cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 20)

add_library(ComeecLibrary)

target_sources(ComeecLibrary
	PRIVATE
		comeec.cpp

	PUBLIC 
		FILE_SET HEADERS
		BASE_DIRS
			include
		FILES
			include/comeec.h
)

