#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace winrt::impl {
class timespan_awaiter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ
    void await_resume();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1timespan_awaiter@impl@winrt@@QEAA@XZ
    ~timespan_awaiter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?callback@timespan_awaiter@impl@winrt@@CAXPEAX00@Z
    static void callback(void *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ
    void create_threadpool_timer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ
    void fire_immediately();
};
} // namespace winrt::impl
