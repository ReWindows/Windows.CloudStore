#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class PutActivePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PutActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PutActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~PutActivePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PutActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PutActivePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
