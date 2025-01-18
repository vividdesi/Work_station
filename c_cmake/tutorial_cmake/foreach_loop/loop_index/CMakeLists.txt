# CMakeLists.txt

# Define a list of items
set(MY_LIST "Apple" "Banana" "Cherry")

# Loop through the list and show index
foreach(FRUIT IN LISTS MY_LIST)
    # Print item and its index position (starting from 1)
    message(STATUS "Item: ${FRUIT} at position ${CMAKE_CURRENT_LIST_INDEX}")
endforeach()

