#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class LoadAssetActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBGI@Z
    void StartActivity(char const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LoadAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDI@Z
    void Stop(char const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~LoadAssetActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
