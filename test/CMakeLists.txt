file(GLOB SRCS *.cpp)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)

add_executable(testAvl ${SRCS} ../avltree/AvlTree.h)

target_link_libraries(testAvl
        AvlTree
        gtest
        gmock
        )

include_directories("..")

install(TARGETS testAvl DESTINATION bin)