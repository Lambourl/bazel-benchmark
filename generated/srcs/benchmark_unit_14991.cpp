#include "bench/fib.hpp"

// RE Benchmark TU 14991 of 20000 (depth=28, stamp="default")
namespace bench_tu_14991 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14991>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14991
