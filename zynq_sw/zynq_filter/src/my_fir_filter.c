#include "my_fir_filter.h"

// Define an array to store the filter coefficients
uint16_t filter_coeffs[] = {
    0xffec, 0xffe1, 0xffd7, 0xffd3, 0xffda, 0xfff0, 0x001a, 0x0055,
    0x0096, 0x00c8, 0x00d5, 0x00a7, 0x002f, 0xff74, 0xfe91, 0xfdb7,
    0xfd27, 0xfd28, 0xfdf4, 0xffad, 0x024e, 0x05a4, 0x0958, 0x0cf5,
    0x0ffd, 0x1202, 0x12b7, 0x1202, 0x0ffd, 0x0cf5, 0x0958, 0x05a4,
    0x024e, 0xffad, 0xfdf4, 0xfd28, 0xfd27, 0xfdb7, 0xfe91, 0xff74,
    0x002f, 0x00a7, 0x00d5, 0x00c8, 0x0096, 0x0055, 0x001a, 0xfff0,
    0xffda, 0xffd3, 0xffd7, 0xffe1, 0xffec
};

// Define the base address where you want to start writing the filter coefficients
volatile uint32_t *base_address = (volatile uint32_t *)0xA0000000;

// Define the number of coefficients
#define NUM_COEFFS (sizeof(filter_coeffs) / sizeof(filter_coeffs[0]))

// Function to initialize the FIR filter
void my_fir_filter_init() {
    // Write filter coefficients to memory
    my_fir_filter_write_coeffs();
    // Add any additional initialization code here if needed
}

// Function to write filter coefficients to memory
void my_fir_filter_write_coeffs() {
    for (int i = 1; i < NUM_COEFFS; i++) {
        // Write data to the current memory location
        *(base_address + i) = filter_coeffs[i];
    }
}


void start_filter() {
	*base_address = 1 ;
}
