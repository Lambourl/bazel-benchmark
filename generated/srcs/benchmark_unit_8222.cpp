#include "bench/fib.hpp"

// RE Benchmark TU 8222 of 20000 (depth=28, stamp="default")
namespace bench_tu_8222 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8222>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8222
