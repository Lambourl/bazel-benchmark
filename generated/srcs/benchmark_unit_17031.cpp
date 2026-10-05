#include "bench/fib.hpp"

// RE Benchmark TU 17031 of 20000 (depth=28, stamp="default")
namespace bench_tu_17031 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17031>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17031
