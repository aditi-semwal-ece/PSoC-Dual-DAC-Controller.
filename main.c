#include "project.h"

int main(void)
{
    /* Enable global interrupts for Cypress PSoC core */
    CyGlobalIntEnable;

    for(;;)
    {
        // Initial bus state reset
        Write_DAC_Write(0);
        CLK_Write(0);
        Select_DAC_Write(0);

        // --- Write In-Phase (I) Channel Data ---
        Select_DAC_Write(1); // Select HIGH for I-Data bus routing
        
        // Load 10-Bit I-Data into control registers
        VM_Reg_1_Write(0x10);
        VM_Reg_2_Write(0x02);
        
        // Latch data to DAC with Clock pulse
        Write_DAC_Write(1);
        CLK_Write(1);
        Write_DAC_Write(0);
        CLK_Write(0);

        // --- Write Quadrature (Q) Channel Data ---
        Select_DAC_Write(0); // Select LOW for Q-Data bus routing
        
        // Load 10-Bit Q-Data into control registers
        VM_Reg_1_Write(0x10);
        VM_Reg_2_Write(0x02);
        
        // Latch data to DAC with Clock pulse
        Write_DAC_Write(1);
        CLK_Write(1);
    }
}
