/*
 * Automatically generated C config: don't edit
 * Nautilus version: 
 * Fri Mar 18 16:27:05 2016
 */
#define AUTOCONF_INCLUDED

/*
 * Platform/Arch Options
 */
#define NAUT_CONFIG_X86_64_HOST 1
#undef NAUT_CONFIG_XEON_PHI
#undef NAUT_CONFIG_HVM_HRT
#define NAUT_CONFIG_MAX_CPUS 256
#define NAUT_CONFIG_MAX_IOAPICS 16

/*
 * Nautilus AeroKernel Build Config
 */
#define NAUT_CONFIG_USE_NAUT_BUILTINS 1
#define NAUT_CONFIG_CXX_SUPPORT 1
#define NAUT_CONFIG_TOOLCHAIN_ROOT ""

/*
 * Interface Options
 */
#define NAUT_CONFIG_THREAD_EXIT_KEYCODE 196

/*
 * Nautilus AeroKernel Configuration
 */
#undef NAUT_CONFIG_USE_TICKETLOCKS

/*
 * AeroKernel Performance Optimizations
 */
#define NAUT_CONFIG_FPU_SAVE 1
#undef NAUT_CONFIG_KICK_SCHEDULE
#undef NAUT_CONFIG_HALT_WHILE_IDLE
#undef NAUT_CONFIG_THREAD_OPTIMIZE
#undef NAUT_CONFIG_USE_IDLE_THREADS
#define NAUT_CONFIG_USE_RT_SCHEDULER 1

/*
 * Debugging
 */
#undef NAUT_CONFIG_DEBUG_INFO
#define NAUT_CONFIG_DEBUG_PRINTS 1
#define NAUT_CONFIG_RT_DEBUG 1
#undef NAUT_CONFIG_ENABLE_ASSERTS
#undef NAUT_CONFIG_PROFILE
#undef NAUT_CONFIG_SILENCE_UNDEF_ERR
#undef NAUT_CONFIG_ENABLE_STACK_CHECK
#undef NAUT_CONFIG_DEBUG_PAGING
#undef NAUT_CONFIG_DEBUG_BOOTMEM
#undef NAUT_CONFIG_DEBUG_BUDDY
#undef NAUT_CONFIG_DEBUG_KMEM
#undef NAUT_CONFIG_DEBUG_FPU
#undef NAUT_CONFIG_DEBUG_SMP
#undef NAUT_CONFIG_DEBUG_SFI
#undef NAUT_CONFIG_DEBUG_CXX
#undef NAUT_CONFIG_DEBUG_THREADS
#undef NAUT_CONFIG_DEBUG_RT_SCHEDULER
#undef NAUT_CONFIG_DEBUG_RT_THREADS
#undef NAUT_CONFIG_DEBUG_SYNCH
#undef NAUT_CONFIG_DEBUG_BARRIER
#undef NAUT_CONFIG_DEBUG_NUMA

/*
 * Parallel Runtime Integration
 */
#undef NAUT_CONFIG_LEGION_RT
#undef NAUT_CONFIG_NDPC_RT
#undef NAUT_CONFIG_NESL_RT
#define NAUT_CONFIG_NO_RT 1

/*
 * Device options
 */
#define NAUT_CONFIG_SERIAL_REDIRECT 1
#define NAUT_CONFIG_SERIAL_PORT 1
#define NAUT_CONFIG_DEBUG_APIC 1
#undef NAUT_CONFIG_DEBUG_IOAPIC
#undef NAUT_CONFIG_DEBUG_PCI
#undef NAUT_CONFIG_DEBUG_KBD
#undef NAUT_CONFIG_DEBUG_TIMERS
#undef NAUT_CONFIG_DEBUG_PIT
#undef NAUT_CONFIG_HPET
#define NAUT_CONFIG_HZ 10
