#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SaveAssetActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void StartActivity(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SaveAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBGI@Z
    void Stop(char const *, unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SaveAssetActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveAssetActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
