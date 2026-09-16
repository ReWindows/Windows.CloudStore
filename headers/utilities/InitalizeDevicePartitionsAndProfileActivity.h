#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class InitalizeDevicePartitionsAndProfileActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void StartActivity(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~InitalizeDevicePartitionsAndProfileActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
