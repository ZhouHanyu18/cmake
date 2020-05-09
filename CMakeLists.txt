# cmake 最低版本要求
cmake_minimum_required (VERSION 2.8)
# 项目名称
project (Main)

# 是否使用自己的 Tools 库
option (USE_MYMATH "Use provided math implementation" ON)

# 是否加入 MathFunctions 库
if (USE_MYMATH)
  include_directories ("${PROJECT_SOURCE_DIR}")
  add_subdirectory (tools)  
  set (EXTRA_LIBS ${EXTRA_LIBS} Tools)
endif (USE_MYMATH)

#CMake 对源码的设置
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)
include_directories ("${PROJECT_BINARY_DIR}")

# 查找当前目录下的所有源文件, 并将名称保存到 DIR_SRCS 变量
aux_source_directory(main/ DIR_SRCS)
# 指定生成目标
add_executable(main ${DIR_SRCS})
# 添加链接库
target_link_libraries(main ${EXTRA_LIBS})
