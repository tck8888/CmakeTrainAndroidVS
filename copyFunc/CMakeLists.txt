# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 将源代码添加到此项目的可执行文件。
add_library (CopyConstructor ${DIR_LIB_SRCS})
