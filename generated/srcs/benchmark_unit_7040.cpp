#include "bench/fib.hpp"

// RE Benchmark TU 7040 of 20000 (depth=28, stamp="default")
namespace bench_tu_7040 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7040>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7040
