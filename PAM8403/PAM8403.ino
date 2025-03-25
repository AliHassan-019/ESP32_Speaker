#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream i2s;  // Use I2S output instead of Analog
BluetoothA2DPSink a2dp_sink(i2s);

void setup() {
    a2dp_sink.start("MyMusic");
}

void loop() {
}
