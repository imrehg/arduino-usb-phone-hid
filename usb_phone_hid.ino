/*
   Please use Arduino IDE 1.6.8+
*/

#include "respeaker.h"
#include "HID-Project.h"


void setup() {
  respeaker.begin();
  respeaker.attach_touch_handler(touch_event);  // add touch event handler
  Phone.begin();
}

void loop() {}

// id: 0 ~ 7 - touch sensor id; event: 1 - touch, 0 - release
void touch_event(uint8_t id, uint8_t event) {
  if (event) {
    if (id < 4) {
      // "left" side touch sensor engaged
      Phone.press(HID_PHONE_MUTE);
    } else {
      // "right" side touch sensor engaged
      Phone.releaseAll();  // hack to handle the single button we have now
    }
  }
}
