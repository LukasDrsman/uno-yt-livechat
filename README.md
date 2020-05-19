# uno-yt-livechat
## Installation
#### Requirements:
* arduino UNO
* python3 with pip
  * pytchat
  * pyserial
  * unidecode
  * platformio
  
#### Install dependencies:
```sh
pip install pytchat pyserial unidecode --user
sudo pip install platformio
```
#### Clone:
```sh
git clone https://github.com/LukasDrsman/uno-yt-livechat.git
cd uno-yt-livechat
```
#### Configure:
##### uno/src/main.cpp
 * char address - i2c address
 * int width - display width in characters per line
 * int height - number of lines of display
```c
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// display configuration
char address = 0x27;
int width = 16;
int height = 2;
...
```
##### config-example.py
 * yt_chat_id - livestream id ( /watch?v=*this string* )
 * port - port to arduino uno
   * linux: /dev/ttyACM*n*
   * windows: COM*n*
 * chr_delay - length of time before new character appears on screen
 * chat_delay - length of time between messages
```python
yt_chat_id = "7NOSDKb0HlU"
port = "/dev/ttyACM0"
chr_delay = 0.15
chat_delay = 2
```

#### Upload and install:
```sh
mv config-example.py config.py
./upload
./build
```
## Usage
#### Connect display to uno:
![preview](https://github.com/LukasDrsman/uno-yt-livechat/blob/master/uno/lcd_diagram.png)
<br/>
#### Run:
```sh
yt-livechat
```
