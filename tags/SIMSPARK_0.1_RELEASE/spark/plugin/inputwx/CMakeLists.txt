
########### next target ###############

if (wxWidgets_FOUND)
  set(inputwx_LIB_SRCS
     export.cpp
     inputsystemwx.h
     inputsystemwx.cpp
     inputsystemwx_c.cpp
     inputwx.h
     inputwx.cpp
  )

  include_directories(${wxWidgets_INCLUDE_DIRS})
  add_definitions(${wxWidgets_DEFINITIONS})
  add_library(inputwx MODULE ${inputwx_LIB_SRCS})

  target_link_libraries(inputwx)

  set_target_properties(inputwx PROPERTIES COMPILE_FLAGS ${wxWidgets_CXX_FLAGS})
  set_target_properties(inputwx PROPERTIES VERSION 0.0.0 SOVERSION 0)
  install(TARGETS inputwx DESTINATION ${LIBDIR}/${CMAKE_PROJECT_NAME})
endif (wxWidgets_FOUND)
