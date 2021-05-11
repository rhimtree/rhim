# rhim
custom arduino file

# ArcCom - Arduino  
Repository for storing Arduino related files and custom board definition.  

## Arduino IDE
Copy and paste the following URL into the File > Preferences > "Additional Boards Manager" textbox.  
<code>
https://raw.githubusercontent.com/rhimtree/rhim/package_rhimtree_index.json
</code>  

The latest version is 0.0.1

Make sure to also install the Arduino SAMD Library at the same time.

Boards > "Add board definition" > Search for "RacCOM" > Install ArcCOM Library

Boards > "Add board definition" > Search for "SAMD" > Install Arduino SAMD Library

# Serial Ports

A number of predefined serial ports are in the Robo HAT MM1 M4 boards.
- Serial - USB
- Serial1 - Wizfi360 Serial Ports (SERCOM5)
