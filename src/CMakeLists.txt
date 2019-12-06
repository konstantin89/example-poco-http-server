project(ExamplePocoHttpServer)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
endif()

set(MAIN_SOURCE main.cpp)

file(GLOB HTTP_SERVER_SOURCES "http_server/*.cpp")



add_executable(http_server ${HTTP_SERVER_SOURCES} ${MAIN_SOURCE})

target_include_directories(http_server PUBLIC ${CONAN_INCLUDE_DIRS})

target_link_libraries(http_server ${CONAN_LIBS})