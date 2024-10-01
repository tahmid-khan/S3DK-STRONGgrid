set (app_StrongridDLLStressTest_SRCS
./Common.h
./main.cpp
)

# old versions of GCC require explicitly linking against pthreads
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable (StrongridDLLStressTest ${app_StrongridDLLStressTest_SRCS})

target_link_libraries (StrongridDLLStressTest  StrongridDLL Threads::Threads)
