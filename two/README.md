two 主要是我看unix对文件5个对文件的基本函数理解，open,read,write,lseek,close

empty.c : 通过lseek函数写出的空洞文件，但是空洞在磁盘上并不占用空间，具体处理方式与文件系统的实现有关。
下面是empty.c打出来的文件信息：

t@beef-Aspire-E1-571G:/usr/xiaoda/linux/linux-/two# ls -l empty.file 
---------- 1 root root 11114 11月  4 08:23 empty.file
它只占据了一个磁盘块
