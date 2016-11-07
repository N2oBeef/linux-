two 主要是我看unix对文件5个对文件的基本函数理解，open,read,write,lseek,close

empty.c : 通过lseek函数写出的空洞文件，但是空洞在磁盘上并不占用空间，具体处理方式与文件系统的实现有关。
下面是empty.c打出来的文件信息：

t@beef-Aspire-E1-571G:/usr/xiaoda/linux/linux-/two# ls -l empty.file 
---------- 1 root root 11114 11月  4 08:23 empty.file
它只占据了一个磁盘块

et4文件系统为什么O_SYNC写入磁盘和fdatasync，fsync设置后时钟时间会增加那么大？

因为调用fdatasync，fsync的时候，把等待时间也计算在内。

hfs文件系统为什么同步写比延迟写时间增加了很多，其可能是因为操作系统已经将以前写入的数据都冲洗到磁盘上。

写入文件的性能依赖很多包括：底层的操作系统实现，磁盘驱动器的速度，文件系统类型。
