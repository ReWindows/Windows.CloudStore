#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class CopyEarlyDownloadRestoreDataToBackupPartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CopyEarlyDownloadRestoreDataToBackupPartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD@Z
    void StartActivity(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CopyEarlyDownloadRestoreDataToBackupPartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIIII@Z
    void Stop(char const *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CopyEarlyDownloadRestoreDataToBackupPartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~CopyEarlyDownloadRestoreDataToBackupPartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CopyEarlyDownloadRestoreDataToBackupPartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CopyEarlyDownloadRestoreDataToBackupPartition@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
