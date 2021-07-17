# SQ110-QuantumSensor
read Apogee SQ110-QuantumSensor with Arduino

### Apogee SQ-110 Specfications
    Sensitivity: 0.2 mV per µmol m-2 s-1
    Calibration Factor: 5.0 µmol m-2 s-1 per mV (reciprocal of sensitivity)
    Calibration Uncertainty: ± 5% 
    Measurement Repeatability: < 1%
    Non-stability (Long-term Drift): < 2% per year
    Non-linearity: < 1 % (up to 4000 µmol m-2 s-1)
    Response Time: < 1 ms
    Field of View: 180 degree
    Spectral Range: 410 nm to 655 nm (wavelengths where response is greater than 50 % of maximum)
    Directional (Cosine) Response: ± 5 % at 75o zenith angle

### Hardware
- Arduino Uno
- ADS1115 16 bits Analog read
- Apogee SQ-110