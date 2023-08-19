# USB HID phone runtime code for Arduino

Allow controlling online meeting's "mute" button with a custom USB HID device.

Requirements:

- [ReSpeaker Arduino Library](https://github.com/respeaker/respeaker_arduino_library)
- [Arduino HID Project - fork](https://github.com/imrehg/HID/) (the `phone` branch)

Flash this project on your device, and plug it into your computer to control online
meetings like Google Meet. You might need to pair the device for the first time.

For more details, see this blogpost: https://gergely.imreh.net/blog/2023/08/making-a-usb-mute-button-for-online-meetings/

## License

The MIT License (MIT)

Copyright © 2023 Gergely Imreh <gergely@imreh.net>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
