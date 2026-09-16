#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace winrt::impl {
class signal_awaiter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ
    bool await_ready() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ
    bool await_resume();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1signal_awaiter@impl@winrt@@QEAA@XZ
    ~signal_awaiter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?callback@signal_awaiter@impl@winrt@@CAXPEAX00I@Z
    static void callback(void *, void *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ
    void create_threadpool_wait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ
    void fire_immediately();
};
} // namespace winrt::impl
