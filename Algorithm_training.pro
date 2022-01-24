QT -= gui

CONFIG += c++11 c++14 c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        balanced_binary_tree_110_leetcode.cpp \
        binary_search_704_leetcode.cpp \
        find_minimum_in_rotated_sorted_array_153_leetcode.cpp \
        guess_number_higher_or_lower_374_leetcode.cpp \
        linked_list_cycle_141_leetcode.cpp \
        main.cpp \
        maximum_depth_of_binary_tree_104_leetcode.cpp \
        merge_intervals_56_leetcode.cpp \
        palindrome_linked_list_234.cpp \
        remove_linked_list_elements_203_leetcode.cpp \
        reverse_linked_list_206_leetcode.cpp \
        reverse_string_344_leetcode.cpp \
        same_tree_100_leetcode.cpp \
        search_a_2d_matrix_74_leetcode.cpp \
        search_in_rotated_sorted_array_2_81_leetcode.cpp \
        search_in_rotated_sorted_array_33_leetcode.cpp \
        single_number_136_leetcode.cpp \
        symmetric_tree_101_leetcode.cpp \
        two_sum_1_leetcode.cpp \
        valid_parentheses_20_leetcode.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    balanced_binary_tree_110_leetcode.h \
    binary_search_704_leetcode.h \
    find_minimum_in_rotated_sorted_array_153_leetcode.h \
    guess_number_higher_or_lower_374_leetcode.h \
    leetcode.h \
    linked_list_cycle_141_leetcode.h \
    maximum_depth_of_binary_tree_104_leetcode.h \
    merge_intervals_56_leetcode.h \
    palindrome_linked_list_234.h \
    remove_linked_list_elements_203_leetcode.h \
    reverse_linked_list_206_leetcode.h \
    reverse_string_344_leetcode.h \
    same_tree_100_leetcode.h \
    search_a_2d_matrix_74_leetcode.h \
    search_in_rotated_sorted_array_2_81_leetcode.h \
    search_in_rotated_sorted_array_33_leetcode.h \
    single_number_136_leetcode.h \
    symmetric_tree_101_leetcode.h \
    two_sum_1_leetcode.h \
    valid_parentheses_20_leetcode.h
