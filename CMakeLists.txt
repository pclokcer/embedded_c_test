cmake_minimum_required(VERSION 3.10)

project(test)

# file(GLOB SOURCES "*.c")
# Kaynak dosyalarını belirtin
set(SOURCES
    main.c
    "test/test.c"
)

# Derleme hedefi oluşturma
add_executable(test ${SOURCES})
