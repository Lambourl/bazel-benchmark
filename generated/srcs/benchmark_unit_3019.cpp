#include "bench/fib.hpp"

// RE Benchmark TU 3019 of 20000 (depth=28, stamp="default")
namespace bench_tu_3019 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3019>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3019
