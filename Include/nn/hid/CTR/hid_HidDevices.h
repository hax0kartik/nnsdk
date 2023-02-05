#pragma once
#include "nn/Result.h"
#include "nn/hid/CTR/hid_HidBase.h"
#include "nn/hid/CTR/hid_Pad.h"
#include "nn/hid/CTR/hid_TouchPanel.h"
#include "nn/hid/CTR/hid_Accelerometer.h"
#include "nn/hid/CTR/hid_Gyroscope.h"
#include "nn/hid/CTR/hid_DebugPad.h"
#include "nn/os/os_SharedMemoryBlock.h"

namespace nn {
namespace hid {
namespace CTR {

    struct HidDevices {
        Pad pad;
        TouchPanel touchPanel;
        Accelerometer accelerometer;
        Gyroscope gyroscope;
        DebugPad debugPad;
        nn::os::SharedMemoryBlock m_sharedMemory;
        Result Initialize(const char *srvName);
    };

namespace {
    HidDevices s_Devices;
    bool isInitialized;
}

    Result Initialize() {
        return s_Devices.Initialize("hid:USER");
    }

} // namespace CTR
} // namespace hid
} // namespace nn
