# Install script for directory: C:/msys64/home/dexterdelandro/SDL

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SDL3")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/msys64/ucrt64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/sdl3.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/msys64/home/dexterdelandro/build/libSDL3.dll.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/msys64/home/dexterdelandro/build/SDL3.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SDL3.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SDL3.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/msys64/ucrt64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SDL3.dll")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/msys64/home/dexterdelandro/build/libSDL3_test.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3headersTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3headersTargets.cmake"
         "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3headersTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3headersTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3headersTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3headersTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3sharedTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3sharedTargets.cmake"
         "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3sharedTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3sharedTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3sharedTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3sharedTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3sharedTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake"
         "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/build/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES
    "C:/msys64/home/dexterdelandro/build/SDL3Config.cmake"
    "C:/msys64/home/dexterdelandro/build/SDL3ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL3" TYPE FILE FILES
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_assert.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_atomic.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_audio.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_begin_code.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_bits.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_blendmode.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_clipboard.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_close_code.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_copying.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_cpuinfo.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_egl.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_endian.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_error.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_events.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_filesystem.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_gamepad.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_guid.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_haptic.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_hidapi.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_hints.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_init.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_intrin.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_joystick.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_keyboard.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_keycode.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_loadso.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_locale.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_log.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_main.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_main_impl.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_messagebox.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_metal.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_misc.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_mouse.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_mutex.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_oldnames.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengl.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengl_glext.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles2.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles2_gl2.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles2_gl2ext.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles2_gl2platform.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_opengles2_khrplatform.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_pen.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_pixels.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_platform.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_platform_defines.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_power.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_properties.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_quit.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_rect.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_render.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_rwops.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_scancode.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_sensor.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_stdinc.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_surface.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_system.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_thread.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_timer.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_touch.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_version.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_video.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_video_capture.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_vulkan.h"
    "C:/msys64/home/dexterdelandro/build/include/SDL3/SDL_revision.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL3" TYPE FILE FILES
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_assert.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_common.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_compare.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_crc32.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_font.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_fuzzer.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_harness.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_log.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_md5.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_memory.h"
    "C:/msys64/home/dexterdelandro/SDL/include/SDL3/SDL_test_random.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/SDL3" TYPE FILE FILES "C:/msys64/home/dexterdelandro/SDL/LICENSE.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man" TYPE DIRECTORY FILES "C:/msys64/home/dexterdelandro/build/docs/man/")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/msys64/home/dexterdelandro/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
