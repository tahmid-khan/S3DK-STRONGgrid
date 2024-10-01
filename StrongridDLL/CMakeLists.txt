set (lib_StrongridDLL_SRCS
./Strongrid.cpp
)

set (lib_StrongridDLL_HDRS
./Strongrid.h
)

add_library (StrongridDLL STATIC ${lib_StrongridDLL_SRCS} ${lib_StrongridDLL_HDRS})

target_link_libraries(StrongridDLL StrongridBase StrongridClientBase)
target_include_directories(StrongridDLL INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

if(WIN32)
  target_link_libraries(StrongridDLL ws2_32)
endif()