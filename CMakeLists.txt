cmake_minimum_required (VERSION 2.6)
project(nsfw)

# Use C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message(STATUS "C++11 support has been enabled by default.")
# Use SSE
option(USE_SSE         "Set to ON to build use SSE"  ON)
option(USE_OPENMP      "Set to ON to build use openmp"  ON)
FIND_PACKAGE( Boost 1.67 COMPONENTS program_options REQUIRED )

INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )
INCLUDE_DIRECTORIES(/usr/local/include)
#添加库文件搜索路径
LINK_DIRECTORIES(/usr/local/lib)

find_package(PkgConfig REQUIRED)
pkg_search_module(OPENSSL REQUIRED openssl)

if( OPENSSL_FOUND )
	include_directories(${OPENSSL_INCLUDE_DIRS})
		message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
	else()
		    # Error; with REQUIRED, pkg_search_module() will throw an error by it's own
endif()
ADD_EXECUTABLE( anyExecutable auto_scp.cpp )

target_link_libraries(anyExecutable ${OPENSSL_LIBRARIES})
TARGET_LINK_LIBRARIES( anyExecutable ${Boost_LIBRARIES} )
TARGET_LINK_LIBRARIES( anyExecutable /usr/local/lib/libssh2.a )
TARGET_LINK_LIBRARIES( anyExecutable /usr/local/lib/libssh2.a )
