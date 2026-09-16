#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class RemoveDataChangedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~RemoveDataChangedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveDataChangedActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
