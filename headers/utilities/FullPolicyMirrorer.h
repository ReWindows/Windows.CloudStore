#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class FullPolicyMirrorer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FullPolicyMirrorer@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0I@Z
    void StartActivity(char const *, char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@FullPolicyMirrorer@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBDII_NI@Z
    void Stop(char const *, unsigned int, unsigned int, bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FullPolicyMirrorer@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~FullPolicyMirrorer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FullPolicyMirrorer@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FullPolicyMirrorer@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
