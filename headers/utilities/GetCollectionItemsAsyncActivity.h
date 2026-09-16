#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class GetCollectionItemsAsyncActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetCollectionItemsAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDIPEBG11I@Z
    void StartActivity(char const *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetCollectionItemsAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDI@Z
    void Stop(char const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCollectionItemsAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~GetCollectionItemsAsyncActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetCollectionItemsAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetCollectionItemsAsyncActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
