#include "bench/fib.hpp"

// RE Benchmark TU 320 of 20000 (depth=28, stamp="default")
namespace bench_tu_320 {
constexpr unsigned long long result = ::bench::slow_fib<28, 320>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_320
