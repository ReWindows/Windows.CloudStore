#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SendRequestAsyncWstr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendRequestAsyncWstr@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBG@Z
    void StartActivity(char const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SendRequestAsyncWstr@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDPEBG@Z
    void Stop(char const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendRequestAsyncWstr@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SendRequestAsyncWstr();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendRequestAsyncWstr@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendRequestAsyncWstr@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
