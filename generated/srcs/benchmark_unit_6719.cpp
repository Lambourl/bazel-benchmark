#include "bench/fib.hpp"

// RE Benchmark TU 6719 of 20000 (depth=28, stamp="default")
namespace bench_tu_6719 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6719>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6719
