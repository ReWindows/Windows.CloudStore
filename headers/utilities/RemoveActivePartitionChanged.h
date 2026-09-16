#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class RemoveActivePartitionChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~RemoveActivePartitionChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveActivePartitionChanged@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
