#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class CreatePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreatePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreatePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~CreatePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreatePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreatePartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
