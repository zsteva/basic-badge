#include <stdint.h>

#define	USE_RAM_IMAGE	
#define	USE_ROMDISK
//#define		REMOVE_MAINLOOP

#define	RAMDISK_SIZE	(1024*22)

uint8_t rx_sta (void);
uint8_t rx_read (void);
void tx_write (uint8_t data);
void set_drive (uint8_t dat);
void set_sector (uint8_t dat);
void set_track (uint8_t dat);
uint8_t read_disk_byte (void);
void write_disk_byte (uint8_t dat);

unsigned char	SPI_dat (uint8_t data);
uint8_t ee_rs (void);
void ee_wren (void);
void ee_wrdi (void);
void read_sector (uint8_t *data, uint16_t addr);
void write_sector (uint8_t *data, uint16_t addr);
void init_diskb(void);

uint8_t rxk_sta (void);
uint8_t rxk_read (void);


void wait_1ms (void);
void wait_ms (uint16_t count);
void wait_cyc (uint16_t cyc);
void init_termint (void);


void write_flash_sector (uint8_t * data, uint16_t addr);
void read_flash_sector (uint8_t *data, uint16_t addr);
void init_first_x_sects (uint8_t i);

void fl_write(uint32_t  addr,uint8_t data);
void fl_erase_4k(uint32_t  addr);
void fl_read_4k(uint32_t  addr, uint8_t * data);
void fl_rst_pb(void);
void fl_wren(void);
void fl_write_4k(uint32_t  addr, uint8_t * data);
void fl_read_nk(uint32_t  addr, uint8_t * data, uint16_t n);
void fl_read_128(uint32_t sector,uint8_t * data);
void fl_write_128(uint32_t sector,uint8_t * data);
void init_first_x_sects (uint8_t i);


#define		IO_CPM_MODE		0
#define		IO_BASIC_MODE	1
