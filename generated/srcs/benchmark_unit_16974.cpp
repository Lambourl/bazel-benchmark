#include "bench/fib.hpp"

// RE Benchmark TU 16974 of 20000 (depth=28, stamp="default")
namespace bench_tu_16974 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16974>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16974
