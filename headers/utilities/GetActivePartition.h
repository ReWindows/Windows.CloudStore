#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class GetActivePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~GetActivePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
