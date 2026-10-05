#include "bench/fib.hpp"

// RE Benchmark TU 19557 of 20000 (depth=28, stamp="default")
namespace bench_tu_19557 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19557>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19557
