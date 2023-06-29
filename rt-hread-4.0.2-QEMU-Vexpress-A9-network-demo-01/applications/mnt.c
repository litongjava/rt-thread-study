#include <rtthread.h>

#ifdef RT_USING_DFS
#include <dfs_fs.h>
#include <dfs_romfs.h>

int mnt_init(void) {
  rt_thread_delay(RT_TICK_PER_SECOND);

  //格式文件系统
  int mkResult=dfs_mkfs("elm", "sd0");
  rt_kprintf("dfs mkfs result:%d \n",mkResult);

  if (dfs_mount("sd0", "/", "elm", 0, 0) == 0) {
    rt_kprintf("file system initialization done!\n");
  }
  else {
    rt_kprintf("file system initialization not done!\n");
  }

  //mount romfs
//  if (dfs_mount(RT_NULL, "/", "rom", 0, &(romfs_root)) == 0) {
//    rt_kprintf("romfs init successed\n");
//  }
//  else {
//    rt_kprintf("romfs init failed\n");
//  }

  //mount ramfs
//  if(dfs_mount(RT_NULL, "/","ram", 0, dfs_ramfs_create(rt_malloc(1024), 1024))==0){
//    rt_kprintf("ramfs init successed\n");
//  }else{
//    rt_kprintf("ramfs init failed\n");
//  }

  return 0;
}
INIT_ENV_EXPORT(mnt_init);
#endif
