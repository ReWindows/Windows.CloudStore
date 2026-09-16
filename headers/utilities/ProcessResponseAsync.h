#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class ProcessResponseAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProcessResponseAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBG@Z
    void StartActivity(char const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ProcessResponseAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessResponseAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~ProcessResponseAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessResponseAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessResponseAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
