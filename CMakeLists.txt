# CMakeList.txt: CmakeTrainVS 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)


add_subdirectory(copyFunc)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)



# 将源代码添加到此项目的可执行文件。
add_executable (CmakeTrainVS ${DIR_SRCS})


# 添加链接库
target_link_libraries(CmakeTrainVS CopyConstructor)



