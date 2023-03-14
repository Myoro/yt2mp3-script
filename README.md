# yt2mp3-script
YouTube to MP3 script for Linux &amp; Windows

# Installing on Windows
1. Install ffmpeg: https://www.geeksforgeeks.org/how-to-install-ffmpeg-on-windows/
2. Go to https://github.com/Myoro/yt2mp3-script/releases/tag/1.0 and download yt2mp3.zip
3. Extract yt2mp3.zip into desired directory (i.e. C:\ or C:\Users\$USER\\)
4. Add this directory as an environment variable https://docs.oracle.com/en/database/oracle/machine-learning/oml4r/1.5.1/oread/creating-and-modifying-environment-variables-on-windows.html#GUID-DD6F9982-60D5-48F6-8270-A27EC53807D0

# Installing on Linux
1. Install dependencies `sudo pacman -S ffmpeg base-devel`
2. `sudo curl -L https://github.com/yt-dlp/yt-dlp/releases/latest/download/yt-dlp -o /usr/local/bin/yt-dlp; sudo chmod a+rx /usr/local/bin/yt-dlp`
3. `git clone https://github.com/Myoro/yt2mp3-script.git; cd yt2mp3-script; g++ yt2mp3.cpp -o yt2mp3; sudo mv yt2mp3 /usr/local/bin`
