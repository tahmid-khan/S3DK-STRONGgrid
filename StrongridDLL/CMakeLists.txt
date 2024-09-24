set (lib_StrongridDLL_SRCS
./Strongrid.cpp
)

set (lib_StrongridDLL_HDRS
./Strongrid.h
)

add_library (StrongridDLL STATIC ${lib_StrongridDLL_SRCS} ${lib_StrongridDLL_HDRS})

target_link_libraries(StrongridDLL StrongridBase StrongridClientBase)

if(WIN32)
  target_link_libraries(StrongridDLL ws2_32)
endif()