#include "bench/fib.hpp"

// RE Benchmark TU 4244 of 20000 (depth=28, stamp="default")
namespace bench_tu_4244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4244
