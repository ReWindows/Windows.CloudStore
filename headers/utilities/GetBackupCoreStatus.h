#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class GetBackupCoreStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetBackupCoreStatus@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void StartActivity(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetBackupCoreStatus@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDII@Z
    void Stop(char const *, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetBackupCoreStatus@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~GetBackupCoreStatus();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetBackupCoreStatus@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetBackupCoreStatus@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
