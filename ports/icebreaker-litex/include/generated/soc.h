//--------------------------------------------------------------------------------
// Auto-generated by Migen (3f9809b) & LiteX (fbadfa17) on 2020-03-24 17:16:01
//--------------------------------------------------------------------------------
#ifndef __GENERATED_SOC_H
#define __GENERATED_SOC_H
#define CONFIG_CLOCK_FREQUENCY 21000000
static inline int config_clock_frequency_read(void) {
	return 21000000;
}
#define CONFIG_CPU_RESET_ADDR 537133056
static inline int config_cpu_reset_addr_read(void) {
	return 537133056;
}
#define CONFIG_CPU_TYPE_VEXRISCV
#define CONFIG_CPU_VARIANT_LITE
#define CONFIG_CSR_DATA_WIDTH 32
static inline int config_csr_data_width_read(void) {
	return 32;
}
#define CONFIG_CSR_ALIGNMENT 32
static inline int config_csr_alignment_read(void) {
	return 32;
}
#define TIMER0_INTERRUPT 1
static inline int timer0_interrupt_read(void) {
	return 1;
}
#define UART_INTERRUPT 0
static inline int uart_interrupt_read(void) {
	return 0;
}

#endif
