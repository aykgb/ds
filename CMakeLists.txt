cmake_minimum_required(VERSION 2.8.2)
project(dsaago)

add_definitions(-g -O0 -Wall --std=c++11)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(base_binary_tree base_binary_tree.cc)
add_library(base_linked_list base_linked_list.cc)

# link_libraries(base_binary_list) # 全局的链接一个库，对任何可执行文件的编译都会链接该库
add_executable(base_quick_sort base_quick_sort.cc)
add_executable(base_heap_sort base_heap_sort.cc)
add_executable(base_merge_sort base_merge_sort.cc)
add_executable(base_binary_tree_print base_binary_tree_print.cc)

add_executable(lc_bintree_level_order_traversal lc_bintree_level_order_traversal.cc)
target_link_libraries(lc_bintree_level_order_traversal base_binary_tree)

add_executable(lc_bintree_zigzag_level_order_traversal lc_bintree_zigzag_level_order_traversal.cc)
target_link_libraries(lc_bintree_zigzag_level_order_traversal base_binary_tree)

add_executable(21.merge-two-sorted-lists 21.merge-two-sorted-lists.cpp)
target_link_libraries(21.merge-two-sorted-lists base_linked_list)

add_executable(24.swap-nodes-in-pairs 24.swap-nodes-in-pairs.cpp)
target_link_libraries(24.swap-nodes-in-pairs base_linked_list)

add_executable(25.reverse-nodes-in-k-group 25.reverse-nodes-in-k-group.cpp)
target_link_libraries(25.reverse-nodes-in-k-group base_linked_list)

add_executable(50.pow-x-n 50.pow-x-n.cpp)
add_executable(62.unique-paths 62.unique-paths.cpp)
add_executable(63.unique-paths-ii 63.unique-paths-ii.cpp)
add_executable(77.combinations 77.combinations.cpp)
add_executable(78.subsets 78.subsets.cpp)
add_executable(94.binary-tree-inorder-traversal 94.binary-tree-inorder-traversal.cpp)

add_executable(104.maximum-depth-of-binary-tree 104.maximum-depth-of-binary-tree.cpp)
target_link_libraries(104.maximum-depth-of-binary-tree base_binary_tree)

add_executable(127.word-ladder 127.word-ladder.cpp)

add_executable(142.linked-list-cycle-ii 142.linked-list-cycle-ii.cpp)
target_link_libraries(142.linked-list-cycle-ii base_linked_list)

add_executable(145.binary-tree-postorder-traversal 145.binary-tree-postorder-traversal.cpp)
target_link_libraries(145.binary-tree-postorder-traversal base_binary_tree)

add_executable(226.invert-binary-tree 226.invert-binary-tree.cpp)
add_executable(322.coin-change 322.coin-change.cpp)
add_executable(704.binary-search 704.binary-search.cpp)
add_executable(860.lemonade-change 860.lemonade-change.cpp)