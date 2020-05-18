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
#### Install, upload and run:
```sh
git clone https://github.com/LukasDrsman/uno-yt-livechat.git
cd uno-yt-livechat
# edit and rename config-example.py to config.py
# connect arduino uno to your computer
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
