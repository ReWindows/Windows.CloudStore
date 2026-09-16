#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class RetrySaveActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RetrySaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0000@Z
    void StartActivity(char const *, char const *, char const *, char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@RetrySaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RetrySaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~RetrySaveActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RetrySaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RetrySaveActivity@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
