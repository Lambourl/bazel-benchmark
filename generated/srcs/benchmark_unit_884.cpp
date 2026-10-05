#include "bench/fib.hpp"

// RE Benchmark TU 884 of 20000 (depth=28, stamp="default")
namespace bench_tu_884 {
constexpr unsigned long long result = ::bench::slow_fib<28, 884>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_884
