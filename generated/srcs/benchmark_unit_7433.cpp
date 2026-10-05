#include "bench/fib.hpp"

// RE Benchmark TU 7433 of 20000 (depth=28, stamp="default")
namespace bench_tu_7433 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7433>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7433
