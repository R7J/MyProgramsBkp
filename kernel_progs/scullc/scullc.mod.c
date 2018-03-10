#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3d6976bf, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc7b8fd46, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x27c400b1, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x18f427aa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9041f1bb, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xec1b975b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x72c4f890, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xa9921b8, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xa1958cbf, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x837701c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7c7bce8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B226E7C16813CBC87034685");
