#include "bench/fib.hpp"

// RE Benchmark TU 10847 of 20000 (depth=28, stamp="default")
namespace bench_tu_10847 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10847>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10847
