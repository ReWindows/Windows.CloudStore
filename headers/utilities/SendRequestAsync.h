#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry {
class SendRequestAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendRequestAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0@Z
    void StartActivity(char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SendRequestAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAAXPEBD0@Z
    void Stop(char const *, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendRequestAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~SendRequestAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendRequestAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendRequestAsync@CloudStoreTelemetry@Cloud@Storage@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::Storage::Cloud::CloudStoreTelemetry
