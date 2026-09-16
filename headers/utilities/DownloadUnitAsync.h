#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class DownloadUnitAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DownloadUnitAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBG@Z
    void StartActivity(char const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DownloadUnitAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDI@Z
    void Stop(char const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DownloadUnitAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~DownloadUnitAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DownloadUnitAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DownloadUnitAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
