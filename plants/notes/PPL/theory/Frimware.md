# Virtual Computer

A computer was defined as an integrated set of algorithms and data structures capable of storing and executing programs. We considered ways in which a given computer might actually be construct

1. Hardware Realization : Representing the data structure and algorithms directly with physical devices.
2. Firmware Realization : representing the data structures and algorithms by `microprogramming` a suitable hardware computer.
3. Virtual Machine.
4. Through some combination of these techniques.

#### Example : Layers of Virtual Computer for web application.

```mermaid
graph BT
hard(["Actual Hardware Computer <br/> (Implemented by physical devices)"])-->firm(["Firmware Virtual Compter <br/> (Implemented machine-langauge istructions <br/> by microcode executed by the actual computer.)"])
firm-->opet(["Operating System Virtual Computer <br/> (Implemented by machine-language programs executing <br/> on the firmware virtual computer)"])
opet-->virt(["C Virtual Computer <br/> (Implemented by run-time library routines <br/> loaded with the compiled program)"])
virt-->webVirt(["Web Virtual Computer <br/>(Browser program implemented in C or Java)"])
webVirt-->webApp(["Web application computer <br/> (Implemented as HTML web pages)"])
input(("Input data"))
webApp-->output(["Output results"])
```

