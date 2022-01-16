QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        binary_search_704_leetcode.cpp \
        find_minimum_in_rotated_sorted_array_153_leetcode.cpp \
        guess_number_higher_or_lower_374_leetcode.cpp \
        main.cpp \
        search_a_2d_matrix_74_leetcode.cpp \
        search_in_rotated_sorted_array_2_81_leetcode.cpp \
        search_in_rotated_sorted_array_33_leetcode.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    binary_search_704_leetcode.h \
    find_minimum_in_rotated_sorted_array_153_leetcode.h \
    guess_number_higher_or_lower_374_leetcode.h \
    leetcode.h \
    search_a_2d_matrix_74_leetcode.h \
    search_in_rotated_sorted_array_2_81_leetcode.h \
    search_in_rotated_sorted_array_33_leetcode.h
