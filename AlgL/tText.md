new lists::
## 关于如何配置vscode的C++环境：

#### 1、获取C/C++扩展

#### 2、进入网页下载MinGW

https://sourceforge.net/projects/mingw-w64/files/

点击x86_x64_win32_sjlj下载，并解压到C:\mingw64

#### 3、环境变量配置

得到了一个 C:\mingw64\bin

在用户和系统变量中的path中添加上面的路径，

打开shellpower，输入gcc -v，出现版本即表示MinGw配置完成

#### 4、.vscode文件配置

c_cpp_properties.json

launch.json

tasks.json

可以按照./ForGit中的.vscode文件夹中的配置方式加以配置。

可以运行 即完成了配置

注意，.vscode文件夹放在最高层的目录下，即工程目录下

# 正式文本束
Algorithms

## 