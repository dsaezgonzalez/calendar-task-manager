# Incoming Inspection Log (Phase A1.2)

Tick each item as the part arrives and write down what you measured. Details are in [implementation_plan.md](../implementation_plan.md) (A1.2).

| # | Part | Arrived | Checked | Notes / measurements |
| :- | :--- | :--- | :--- | :--- |
| 1 | `ESP32-8048S070C` display + ESP32-S3 | ☐ | ☐ | Board revision: ____ · Factory demo boots: ☐ · Touch works: ☐ · Header labels read (P1/P3/P4): ____ |
| 2 | `MH-CD42` charge & boost module | ☐ | ☐ | Solder bridges on pads: ☐ none · Pad labels seen: ____ |
| 3 | `JRC-C009` 2-pin USB-C socket | ☐ | ☐ | Has 5.1kΩ CC resistors (works with C-to-C chargers)? ☐ yes ☐ no |
| 4 | LiPo battery | ☐ | ☐ | Voltage: ____ V (expect 3.6–4.0V) · Not puffed/dented: ☐ · PCM board present: ☐ · Size: ____ × ____ × ____ mm |
| 5 | `SS12D00G4` slide switch | ☐ | ☐ | |
| 6 | `DS3231` RTC + coin cell | ☐ | ☐ | Cell type: ☐ CR2032 ☐ LIR2032 · If CR2032 on a ZS-042: charging diode/resistor removed: ☐ |
| 7 | Matte screen film | ☐ | ☐ | Size: ____ mm |
| 8 | Stylus tips | ☐ | ☐ | Type: ☐ disc ☐ mesh · Diameter: ____ mm |
| 9 | `1N5819` diode, 2× `1MΩ`, `100nF` | ☐ | ☐ | Resistors measured with multimeter: ____ kΩ / ____ kΩ |

> Never connect the LiPo to anything until you've checked its polarity with a multimeter. Reversed polarity destroys the `MH-CD42`.
