# PSoC-Based Baseband I/Q Signal Controller

A firmware implementation and hardware interfacing project developed using Cypress PSoC to generate precision in-phase (I) and quadrature (Q) baseband voltages via an external dual-channel DAC (AD9761).

### Key Technical Aspects
- **PSoC Digital Control:** Utilized Cypress PSoC architecture to configure internal digital blocks and bus timing for dual DAC control.
- **Baseband Vector Modulation:** Generated calibrated differential voltages interfaced to an analog vector multiplier (ADL5390) for dynamic amplitude and phase regulation.
- **RF Self-Interference Cancellation (SIC):** Designed to support test benchmarks for Full-Duplex radio transceiver architectures, validating signal nulling across 90° and 180° phase variations.
- **Memory & Firmware Optimization:** Structured embedded C drivers utilizing Harvard architecture memory constraints and low-latency register writes.

### Tech Stack
- **IDE & Tools:** PSoC Creator, ModelSim, RF Test Benches (Spectrum Analyzer, Vector Signal Analyzer)
- **Target ICs:** Cypress PSoC Controller, Analog Devices AD9761 (Dual DAC), ADL5390 (Vector Multiplier)
- **Language:** Embedded C
