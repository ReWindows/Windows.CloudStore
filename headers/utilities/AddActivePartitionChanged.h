#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class AddActivePartitionChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~AddActivePartitionChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
