#include "bench/fib.hpp"

// RE Benchmark TU 4654 of 20000 (depth=28, stamp="default")
namespace bench_tu_4654 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4654>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4654
