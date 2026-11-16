# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DSASTUDENTMANAGMENT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DSASTUDENTMANAGMENT_autogen.dir\\ParseCache.txt"
  "DSASTUDENTMANAGMENT_autogen"
  )
endif()
