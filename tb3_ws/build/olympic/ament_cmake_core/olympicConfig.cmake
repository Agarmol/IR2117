# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_olympic_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED olympic_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(olympic_FOUND FALSE)
  elseif(NOT olympic_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(olympic_FOUND FALSE)
  endif()
  return()
endif()
set(_olympic_CONFIG_INCLUDED TRUE)

# output package information
if(NOT olympic_FIND_QUIETLY)
  message(STATUS "Found olympic: 0.0.0 (${olympic_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'olympic' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${olympic_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(olympic_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${olympic_DIR}/${_extra}")
endforeach()
