#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class LoadBulkActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0000@Z
    void StartActivity(char const *, char const *, char const *, char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LoadBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~LoadBulkActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadBulkActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
